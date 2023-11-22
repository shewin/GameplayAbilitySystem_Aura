// Copyright Sherry

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "MyAuraCharacterBase.generated.h"

UCLASS(Abstract)
class AURA_API AAuraMyCharacterBase : public ACharacter
{
	GENERATED_BODY()

public:
	AAuraMyCharacterBase();

protected:
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere, Category="Combat")
	TObjectPtr<USkeletalMeshComponent> Weapon;
	
};
