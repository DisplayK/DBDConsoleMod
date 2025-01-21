#pragma once

#include "CoreMinimal.h"
#include "UObject/SoftObjectPtr.h"
#include "EItemRarity.h"
#include "BaseLoadoutPartViewData.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FBaseLoadoutPartViewData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FName ItemId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	TSoftObjectPtr<UTexture2D> IconTexture;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FString DisplayName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	EItemRarity Rarity;

public:
	DBDUIVIEWINTERFACES_API FBaseLoadoutPartViewData();
};

FORCEINLINE uint32 GetTypeHash(const FBaseLoadoutPartViewData) { return 0; }
