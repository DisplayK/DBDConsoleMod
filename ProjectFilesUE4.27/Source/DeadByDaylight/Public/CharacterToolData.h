#pragma once

#include "CoreMinimal.h"
#include "EPlayerRole.h"
#include "CharacterToolData.generated.h"

USTRUCT(BlueprintType)
struct FCharacterToolData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	EPlayerRole Role;

	UPROPERTY(EditAnywhere)
	int32 CharacterId;

	UPROPERTY(EditAnywhere)
	FName OutfitId;

	UPROPERTY(EditAnywhere)
	FName CharmId;

	UPROPERTY(EditAnywhere)
	FName SurvivorHead;

	UPROPERTY(EditAnywhere)
	FName SurvivorTorso;

	UPROPERTY(EditAnywhere)
	FName SurvivorLegs;

	UPROPERTY(EditAnywhere)
	FName KillerHead;

	UPROPERTY(EditAnywhere)
	FName KillerBody;

	UPROPERTY(EditAnywhere)
	FName KillerWeapon;

	UPROPERTY(EditAnywhere)
	bool IsAnimBP;

	UPROPERTY(EditAnywhere)
	FString AnimAsset;

public:
	DEADBYDAYLIGHT_API FCharacterToolData();
};

FORCEINLINE uint32 GetTypeHash(const FCharacterToolData) { return 0; }
