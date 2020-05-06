// Fill out your copyright notice in the Description page of Project Settings.
#pragma once

#include "Global.h"
#include "GameFramework/Character.h"
#include "PlayerCharacter.generated.h"

UENUM()
enum class CAMERA_MODE : uint8
{
	CM_ACTION,
	CM_TOP
};

UCLASS()
class CHOI_API APlayerCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	APlayerCharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	virtual float TakeDamage(float Damage, struct FDamageEvent const& DamageEvent, AController* EventInstigator, AActor* DamageCauser) override;
public:
	void MoveForward(float _fScale);
	void MoveRight(float _fScale);
	void JumpKey();
	void AttackKey();
	void CameraChange();
	void TurnZ(float _fScale);
	void Attack();
	void Death();
	void SkillOne();
	void EquipWeapon();
	void DropWeapon();
	void Inventory();
	UFUNCTION()
	void DropEvent(UPrimitiveComponent* HitComponent, AActor* OtherActor,
		UPrimitiveComponent* OtherComp, int32 iBodyIndex,
		bool bFromSweep, const FHitResult& Hit);
public:
	UPROPERTY(EditAnywhere)
		UCameraComponent* m_pCamera;
	UPROPERTY(EditAnywhere)
		USpringArmComponent* m_pArm;
	UPROPERTY(EditAnywhere)
		CAMERA_MODE m_eCameraMode;
	UPROPERTY(EditAnywhere)
		int32 iHP;
	UPROPERTY(EditAnywhere)
		int32 iHPMax;
	UPROPERTY(EditAnywhere)
		float fAttackPt;

	class AWeaponActor*  pWeapon;


private:
	MOVE_DIR     m_eMoveDir;
	class UPlayerAnimInstance* m_pAnimInst;
	float fAttackRange;
	TSubclassOf<UUserWidget> WidgetClass;
	class UHUDWidget* pHUDWidget;
};