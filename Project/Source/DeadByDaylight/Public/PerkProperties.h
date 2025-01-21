#pragma once

#include "CoreMinimal.h"
#include "OfferingEffect.h"
#include "ItemData.h"
#include "PerkLevelText.h"
#include "EItemRarity.h"
#include "EPerkCategory.h"
#include "UObject/SoftObjectPtr.h"
#include "PerkProperties.generated.h"

class UPerk;

USTRUCT(BlueprintType)
struct FPerkProperties: public FItemData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FName> Tags;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FOfferingEffect> Effects;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 AssociatedPlayerIndex;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 MandatoryOnBloodweblevel;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 TeachableOnBloodweblevel;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 AtlantaTeachableLevel;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<EPerkCategory> PerkCategory;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftClassPtr<UPerk> PerkBlueprint;

	UPROPERTY(EditAnywhere, EditFixedSize)
	TArray<EItemRarity> PerkLevelRarity;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FPerkLevelText> PerkLevelTunables;

	UPROPERTY(EditAnywhere, EditFixedSize)
	FText PerkLevel1Description;

	UPROPERTY(EditAnywhere, EditFixedSize)
	FText PerkLevel2Description;

	UPROPERTY(EditAnywhere, EditFixedSize)
	FText PerkLevel3Description;

	UPROPERTY(EditAnywhere)
	TArray<FString> AtlantaActivatableInteractionIDs;

	UPROPERTY(EditAnywhere)
	bool AtlantaLowPriority;

public:
	DEADBYDAYLIGHT_API FPerkProperties();
};

FORCEINLINE uint32 GetTypeHash(const FPerkProperties) { return 0; }
