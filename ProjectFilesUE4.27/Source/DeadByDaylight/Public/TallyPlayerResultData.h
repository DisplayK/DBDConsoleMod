#pragma once

#include "CoreMinimal.h"
#include "InventorySlotData.h"
#include "EGameState.h"
#include "PrestigeData.h"
#include "TallyPlayerResultData.generated.h"

USTRUCT(BlueprintType)
struct FTallyPlayerResultData
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadOnly, Transient)
	FName CharacterIconPath;

	UPROPERTY(BlueprintReadOnly, Transient)
	FString PlayerId;

	UPROPERTY(BlueprintReadOnly, Transient)
	FString PlatformAccountId;

	UPROPERTY(BlueprintReadOnly, Transient)
	FString MirrorsId;

	UPROPERTY(BlueprintReadOnly, Transient)
	FString PlayerName;

	UPROPERTY(BlueprintReadOnly, Transient)
	FString CharacterName;

	UPROPERTY(BlueprintReadOnly, Transient)
	int32 PlayerScore;

	UPROPERTY(BlueprintReadOnly, Transient)
	int32 PlayerRank;

	UPROPERTY(BlueprintReadOnly, Transient)
	EGameState PlayerStatus;

	UPROPERTY(BlueprintReadOnly, Transient)
	FInventorySlotData OfferingData;

	UPROPERTY(BlueprintReadOnly, Transient)
	TArray<FInventorySlotData> PerksData;

	UPROPERTY(BlueprintReadOnly, Transient)
	FInventorySlotData ItemData;

	UPROPERTY(BlueprintReadOnly, Transient)
	TArray<FInventorySlotData> AddonsData;

	UPROPERTY(BlueprintReadOnly, Transient)
	FPrestigeData PrestigeData;

	UPROPERTY(BlueprintReadOnly, Transient)
	bool IsReported;

	UPROPERTY(BlueprintReadOnly, Transient)
	bool IsSlasher;

	UPROPERTY(BlueprintReadOnly, Transient)
	bool IsMyScore;

	UPROPERTY(BlueprintReadOnly, Transient)
	bool IsOffNetwork;

	UPROPERTY(BlueprintReadOnly, Transient)
	bool ShowPortraitBorder;

	UPROPERTY(BlueprintReadOnly, Transient)
	bool IsABot;

public:
	DEADBYDAYLIGHT_API FTallyPlayerResultData();
};

FORCEINLINE uint32 GetTypeHash(const FTallyPlayerResultData) { return 0; }
