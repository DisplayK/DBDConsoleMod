#pragma once

#include "CoreMinimal.h"
#include "DBDTableRowBase.h"
#include "ELoadoutItemType.h"
#include "EItemRarity.h"
#include "SecretBotMatchLoadoutDefinition.generated.h"

USTRUCT(BlueprintType)
struct FSecretBotMatchLoadoutDefinition: public FDBDTableRowBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	uint8 BotRank;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	ELoadoutItemType ItemEquipped;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	EItemRarity ItemRarity;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	uint8 NbAddons;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	EItemRarity AddonsRarity;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	EItemRarity OfferingRarity;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	uint8 NbGenericPerks;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	uint8 NbCharacterSpecificPerks;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TArray<int32> PerkTiersList;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TArray<int32> CharactersIndexList;

public:
	ONBOARDING_API FSecretBotMatchLoadoutDefinition();
};

FORCEINLINE uint32 GetTypeHash(const FSecretBotMatchLoadoutDefinition) { return 0; }
