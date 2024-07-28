#pragma once

#include "CoreMinimal.h"
#include "ItemAvailability.h"
#include "EPlayerRole.h"
#include "ItemUIData.h"
#include "DBDTableRowBase.h"
#include "EItemRarity.h"
#include "CustomizationData.generated.h"

USTRUCT(BlueprintType)
struct FCustomizationData: public FDBDTableRowBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FName ID;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	int32 AssociatedCharacter;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	EPlayerRole AssociatedRole;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	EItemRarity Rarity;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	FItemUIData UIData;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	FItemAvailability Availability;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	FString InclusionVersion;

public:
	DEADBYDAYLIGHT_API FCustomizationData();
};

FORCEINLINE uint32 GetTypeHash(const FCustomizationData) { return 0; }
