// Copyright Sherry


#include "Character/MyAuraCharacterBase.h"

// Sets default values
AAuraMyCharacterBase::AAuraMyCharacterBase()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Weapon = CreateDefaultSubobject<USkeletalMeshComponent>("Weapon");
	Weapon->SetupAttachment(GetMesh(), FName("WeaponHandSocket"));
	Weapon->SetCollisionEnabled(ECollisionEnabled::NoCollision);
}

// Called when the game starts or when spawned
void AAuraMyCharacterBase::BeginPlay()
{
	Super::BeginPlay();
	
}


