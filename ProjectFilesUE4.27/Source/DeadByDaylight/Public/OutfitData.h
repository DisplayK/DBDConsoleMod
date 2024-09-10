#pragma once

#include "CoreMinimal.h"
#include "ItemUIData.h"
#include "DBDTableRowBase.h"
#include "ItemAvailability.h"
#include "OutfitData.generated.h"

USTRUCT(BlueprintType)
struct FOutfitData: public FDBDTableRowBase
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	FName ID;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	FItemUIData UIData;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	FItemAvailability Availability;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TArray<FName> OutfitItems;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	FText CollectionName;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	FText CollectionDescription;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	FString InclusionVersion;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool IsAvailableInAtlantaBuild;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	FName CustomizedAudioStateCollection;

public:
	DEADBYDAYLIGHT_API FOutfitData();
};

FORCEINLINE uint32 GetTypeHash(const FOutfitData) { return 0; }
