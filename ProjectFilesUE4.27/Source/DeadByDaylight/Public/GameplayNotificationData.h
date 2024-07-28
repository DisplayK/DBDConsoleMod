#pragma once

#include "CoreMinimal.h"
#include "EStatusEffectType.h"
#include "EInventoryItemType.h"
#include "GameplayNotificationData.generated.h"

USTRUCT(BlueprintType)
struct FGameplayNotificationData
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName SourceID;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EInventoryItemType SourceType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 SourceIconIndex;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 SourceLevel;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName EffectID;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString EffectIconFilePath;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EStatusEffectType EffectType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText EffectDisplayName;

public:
	DEADBYDAYLIGHT_API FGameplayNotificationData();
};

FORCEINLINE uint32 GetTypeHash(const FGameplayNotificationData) { return 0; }
