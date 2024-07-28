#pragma once

#include "CoreMinimal.h"
#include "CustomGameBotsData.h"
#include "GamePresetData.generated.h"

USTRUCT(BlueprintType)
struct FGamePresetData
{
	GENERATED_BODY()

private:
	UPROPERTY()
	TArray<uint8> _mapAvailabilities;

	UPROPERTY()
	TArray<uint8> _perkAvailabilities;

	UPROPERTY()
	TArray<uint8> _offeringAvailabilities;

	UPROPERTY()
	TArray<uint8> _itemAvailabilities;

	UPROPERTY()
	TArray<uint8> _itemAddonAvailabilities;

	UPROPERTY()
	TArray<uint8> _customizationItemAvailabilities;

	UPROPERTY()
	TArray<uint8> _characterAvailabilities;

	UPROPERTY()
	bool _allowDlcContent;

	UPROPERTY()
	bool _privateMatch;

	UPROPERTY()
	FCustomGameBotsData _botsData;

public:
	DEADBYDAYLIGHT_API FGamePresetData();
};

FORCEINLINE uint32 GetTypeHash(const FGamePresetData) { return 0; }
