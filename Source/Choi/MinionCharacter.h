// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Global.h"
#include "MonsterCharacter.h"
#include "MinionCharacter.generated.h"

/**
 * 
 */
UCLASS()
class CHOI_API AMinionCharacter : public AMonsterCharacter
{
	GENERATED_BODY()
	
public:
	// Sets default values for this character's properties
	AMinionCharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;


private:
	class AMonsterController* pController;

};
