#pragma once

#include "CoreMinimal.h"
#include "ECharacterDifficulty.h"
#include "CharacterTooltipViewData.generated.h"

USTRUCT(BlueprintType)
struct FCharacterTooltipViewData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FText DisplayName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FText Biography;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FText DLCTitle;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	int32 Level;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	int32 Prestige;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool IsUnlocked;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool IsNewInStore;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool IsOwned;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool IsAvailableInStore;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool IsDLCPurchasable;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	ECharacterDifficulty Difficulty;

	UPROPERTY(BlueprintReadOnly, Transient)
	bool IsEnabled;

	UPROPERTY(BlueprintReadOnly, Transient)
	FText CharacterDisabledMessage;

public:
	DBDUIVIEWINTERFACES_API FCharacterTooltipViewData();
};

FORCEINLINE uint32 GetTypeHash(const FCharacterTooltipViewData) { return 0; }
