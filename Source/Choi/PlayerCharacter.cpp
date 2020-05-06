// Fill out your copyright notice in the Description page of Project Settings.

#include "PlayerCharacter.h"
#include "PlayerAnimInstance.h"
#include "DrawDebugHelpers.h"
#include "ParticleActor.h"
#include "WeaponActor.h"
#include "Blueprint/UserWidget.h"
#include "HUDWidget.h"

// Sets default values
APlayerCharacter::APlayerCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	ConstructorHelpers::FObjectFinder<USkeletalMesh> Asset(TEXT("SkeletalMesh'/Game/ParagonKwang/Characters/Heroes/Kwang/Meshes/Kwang_GDC.Kwang_GDC'"));

	if (Asset.Succeeded())
		GetMesh()->SetSkeletalMesh(Asset.Object);
	GetMesh()->RelativeLocation = FVector(0.f, 3.f, -92.f);
	GetMesh()->RelativeRotation = FRotator(0.f, -90.f, 0.f);

	GetCapsuleComponent()->SetCapsuleHalfHeight(93.5f);
	GetCapsuleComponent()->SetCapsuleRadius(24.f);

	m_pCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	m_pArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("Arm"));

	m_pArm->SetupAttachment(RootComponent);
	m_pCamera->SetupAttachment(m_pArm);

	m_pArm->TargetArmLength = 300.f;
	m_pArm->SetWorldRotation(FRotator(-20.f,0.f,0.f));
	bUseControllerRotationYaw = true;

	UCharacterMovementComponent* pMove = Cast<UCharacterMovementComponent>(GetMovementComponent());

	if(pMove)
		pMove->JumpZVelocity = 1000.f;

	ConstructorHelpers::FClassFinder<UAnimInstance> AnimAsset(TEXT("AnimBlueprint'/Game/Animation/KwangAnim.KwangAnim_C'"));
	if(AnimAsset.Succeeded())
		GetMesh()->SetAnimInstanceClass(AnimAsset.Class);

	GetCapsuleComponent()->CanCharacterStepUpOn = ECanBeCharacterBase::ECB_No;
	GetCapsuleComponent()->SetCollisionProfileName(TEXT("Player"));

	m_eMoveDir = MD_NONE;
	fAttackRange = 400.f;

	iHP = 100;
	iHPMax = 100;
	fAttackPt = 30.f;
	pWeapon = nullptr;


	static ConstructorHelpers::FClassFinder<UUserWidget> HUDWidgetClass(TEXT("WidgetBlueprint'/Game/UI/HUD.HUD_C'"));
	if (HUDWidgetClass.Succeeded())
		WidgetClass = HUDWidgetClass.Class;
}

// Called when the game starts or when spawned
void APlayerCharacter::BeginPlay()
{
	Super::BeginPlay();
	m_pAnimInst = Cast<UPlayerAnimInstance>(GetMesh()->GetAnimInstance());

	pHUDWidget = Cast<UHUDWidget>(CreateWidget(GetWorld(), WidgetClass,TEXT("HUD")));
	if (pHUDWidget)
	{
		pHUDWidget->AddToViewport();
		pHUDWidget->GetInven()->SetVisibility(ESlateVisibility::Hidden);
	}

	GetCapsuleComponent()->OnComponentBeginOverlap.AddDynamic(this, &APlayerCharacter::DropEvent);
}

// Called every frame
void APlayerCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void APlayerCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAxis(TEXT("Side"),this, &APlayerCharacter::MoveRight);
	PlayerInputComponent->BindAxis(TEXT("Forward"),this, &APlayerCharacter::MoveForward);
	PlayerInputComponent->BindAxis(TEXT("TurnZ"), this, &APlayerCharacter::TurnZ);

	PlayerInputComponent->BindAction(TEXT("Jump"),EInputEvent::IE_Pressed,this, &APlayerCharacter::JumpKey);
	PlayerInputComponent->BindAction(TEXT("Attack"),EInputEvent::IE_Pressed,this, &APlayerCharacter::AttackKey);
	PlayerInputComponent->BindAction(TEXT("CameraChange"), EInputEvent::IE_Pressed, this, &APlayerCharacter::CameraChange);
	PlayerInputComponent->BindAction(TEXT("Skill1"), EInputEvent::IE_Pressed, this, &APlayerCharacter::SkillOne);
	PlayerInputComponent->BindAction(TEXT("EquipWeapon"), EInputEvent::IE_Pressed, this, &APlayerCharacter::EquipWeapon);
	PlayerInputComponent->BindAction(TEXT("DropWeapon"), EInputEvent::IE_Pressed, this, &APlayerCharacter::DropWeapon);
	PlayerInputComponent->BindAction(TEXT("Inventory"), EInputEvent::IE_Pressed, this, &APlayerCharacter::Inventory);
}

void APlayerCharacter::MoveForward(float _fScale)
{
	if (m_pAnimInst->GetAnimType() >= PAT_ATTACK || m_pAnimInst->GetAnimType() == JUMP)
		return;

	AddMovementInput(GetActorForwardVector(),_fScale);

	if (_fScale > 0.f)
		m_eMoveDir = MD_FORWARD;
	else
		m_eMoveDir = MD_BACK;

	if (_fScale != 0.f)
		m_pAnimInst->SetMoveDir(m_eMoveDir);
}

void APlayerCharacter::MoveRight(float _fScale)
{
	if (m_pAnimInst->GetAnimType() >= PAT_ATTACK || m_pAnimInst->GetAnimType() == JUMP)
		return;

	AddMovementInput(GetActorRightVector(), _fScale);

	if (_fScale > 0.f)
		m_eMoveDir = MD_RIGHT;
	else
		m_eMoveDir = MD_LEFT;

	if (_fScale != 0.f)
		m_pAnimInst->SetMoveDir(m_eMoveDir);
}

void APlayerCharacter::JumpKey()
{
	if (m_pAnimInst->GetAnimType() >= PAT_ATTACK || m_pAnimInst->GetAnimType() == JUMP)
		return;
		Jump();
		m_pAnimInst->Jump();
	
}

void APlayerCharacter::AttackKey()
{
	//PrintViewport(2.f,TEXT("Attack"), VT_NORMAL);
	m_pAnimInst->Attack();
}

void APlayerCharacter::CameraChange()
{
	switch (m_eCameraMode)
	{
	case CAMERA_MODE::CM_ACTION:
		m_eCameraMode = CAMERA_MODE::CM_TOP;
		m_pArm->TargetArmLength = 1200.f;
		m_pArm->SetWorldRotation(FRotator(-50.f, 0.f, 0.f));
		m_pArm->bInheritYaw = false;
		break;
	case CAMERA_MODE::CM_TOP:
		m_eCameraMode = CAMERA_MODE::CM_ACTION;
		m_pArm->TargetArmLength = 300.f;
		m_pArm->SetWorldRotation(FRotator(-20.f, 0.f, 0.f));
		m_pArm->bInheritYaw = true;
		break;

	default:
		break;
	}
}

void APlayerCharacter::TurnZ(float _fScale)
{
	if (_fScale == 0.f)
		return;
	switch (m_eCameraMode)
	{
	case CAMERA_MODE::CM_ACTION:
		AddControllerYawInput(_fScale);
		break;
	case CAMERA_MODE::CM_TOP:
		break;

	default:
		break;
	}
}

void APlayerCharacter::Attack()
{
	/*FHitResult result;
	FCollisionQueryParams param(NAME_None,false,this);
	if (GetWorld()->SweepSingleByChannel(result, GetActorLocation(), GetActorLocation() + (GetActorForwardVector() * fAttackRange), FQuat::Identity,
		ECollisionChannel::ECC_GameTraceChannel3, FCollisionShape::MakeSphere(100.f), param))
	{
		PrintViewport(2.f, TEXT("Coll"), VT_NORMAL);
	}*/

	TArray<FHitResult> arrResult;
	FCollisionQueryParams param(NAME_None, false, this);

	bool bResult = GetWorld()->SweepMultiByChannel(arrResult, GetActorLocation(), GetActorLocation() + (GetActorForwardVector() * fAttackRange), FQuat::Identity,
		ECollisionChannel::ECC_GameTraceChannel3, FCollisionShape::MakeSphere(40.f), param);

#if	ENABLE_DRAW_DEBUG
	FVector vCenter = GetActorLocation() + (GetActorForwardVector() * (fAttackRange * 0.5f) );
	FColor DrawColor = bResult ? FColor::Red : FColor::Green;
	DrawDebugCapsule(GetWorld(), vCenter, fAttackRange * 0.5f, 40.f,FRotationMatrix::MakeFromZ(GetActorForwardVector()).ToQuat(),DrawColor,false,2.f);
#endif

	if (bResult)
	{
		for (auto& temp : arrResult)
		{
			//LOG(Warning, TEXT("%s Position : %s"), *temp.GetActor()->GetName(), *temp.ImpactPoint.ToString());
			FDamageEvent event;
			temp.GetActor()->TakeDamage(fAttackPt, event,GetController(),this);

			AParticleActor* pParticle = GetWorld()->SpawnActor<AParticleActor>(temp.ImpactPoint,temp.ImpactNormal.ToOrientationRotator());
			pParticle->LoadAsset(TEXT("ParticleSystem'/Game/ParagonKwang/FX/Particles/Abilities/Primary/FX/P_Kwang_Primary_Impact.P_Kwang_Primary_Impact'"));
			pParticle->SetLifeSpan(2.f);
		}
	}
}

void APlayerCharacter::Death()
{
	m_pAnimInst->Death();
}

float APlayerCharacter::TakeDamage(float Damage, FDamageEvent const & DamageEvent, AController * EventInstigator, AActor * DamageCauser)
{
	float fDmg = Super::TakeDamage(Damage, DamageEvent, EventInstigator, DamageCauser);

	iHP -= fDmg;
	if (iHP < 0)
	{
		Death();
	}
	return fDmg;
}

void APlayerCharacter::SkillOne()
{
	PrintViewport(2.f, TEXT("Skill"),VT_CRITICAL);
	AParticleActor* pParticle = GetWorld()->SpawnActor<AParticleActor>(FVector::ZeroVector, GetActorRotation());
	pParticle->LoadAsset(TEXT("ParticleSystem'/Game/ParagonKwang/FX/Particles/FX/P_Kwang_Recall_ArmCharge.P_Kwang_Recall_ArmCharge'"));
	pParticle->AttachToComponent(GetMesh(),FAttachmentTransformRules::KeepRelativeTransform,TEXT("FX_Trail_L_01"));


	pParticle = GetWorld()->SpawnActor<AParticleActor>(FVector::ZeroVector, GetActorRotation());
	pParticle->LoadAsset(TEXT("ParticleSystem'/Game/ParagonKwang/FX/Particles/FX/P_Kwang_Recall_ArmCharge.P_Kwang_Recall_ArmCharge'"));
	pParticle->AttachToComponent(GetMesh(), FAttachmentTransformRules::KeepRelativeTransform, TEXT("FX_Trail_R_01"));
	//pParticle->SetLifeSpan(2.f);
}

void APlayerCharacter::EquipWeapon()
{
	if (pWeapon)
		return;
	pWeapon = GetWorld()->SpawnActor<AWeaponActor>(FVector::ZeroVector, FQuat::Identity.Rotator());
	pWeapon->AttachToComponent(GetMesh(), FAttachmentTransformRules::KeepRelativeTransform, TEXT("weapon_l"));
	pWeapon->LoadMesh(TEXT("StaticMesh'/Game/FPS_Weapon_Bundle/Weapons/Meshes/SMG11/SM_SMG11_Nostock_X.SM_SMG11_Nostock_X'"));
}

void APlayerCharacter::DropWeapon()
{
	if (pWeapon)
	{
		pWeapon->DetachFromActor(FDetachmentTransformRules::KeepWorldTransform);
		pWeapon->GetStaticMesh()->SetSimulatePhysics(true);
		pWeapon->GetStaticMesh()->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
		pWeapon = nullptr;
	}
}

void APlayerCharacter::Inventory()
{
	LOG(Warning, TEXT("AAAAA"));
	if (pHUDWidget)
	{
		if (pHUDWidget->GetInven()->GetVisibility() == ESlateVisibility::Hidden)
			pHUDWidget->GetInven()->SetVisibility(ESlateVisibility::Visible);
		else if (pHUDWidget->GetInven()->GetVisibility() == ESlateVisibility::Visible)
			pHUDWidget->GetInven()->SetVisibility(ESlateVisibility::Hidden);
	}
}

void APlayerCharacter::DropEvent(UPrimitiveComponent* HitComponent, AActor* OtherActor,
	UPrimitiveComponent* OtherComp, int32 iBodyIndex,
	bool bFromSweep, const FHitResult& Hit)
{
	LOG(Warning, TEXT("AAAAA %s"), *OtherActor->GetName());
}