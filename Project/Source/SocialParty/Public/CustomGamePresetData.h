#pragma once

#include "CoreMinimal.h"
#include "CustomGameBotsData.h"
#include "CustomGamePresetData.generated.h"

USTRUCT()
struct FCustomGamePresetData
{
	GENERATED_BODY()

private:
	UPROPERTY()
	TArray<uint8> _mapAvailabilities;

	UPROPERTY()
	bool _arePerkAvailable;

	UPROPERTY()
	bool _areOfferingAvailable;

	UPROPERTY()
	bool _areItemAvailable;

	UPROPERTY()
	bool _areItemAddonAvailable;

	UPROPERTY()
	bool _areDlcContentAllowed;

	UPROPERTY()
	bool _isPrivateMatch;

	UPROPERTY()
	FCustomGameBotsData _botsData;

public:
	SOCIALPARTY_API FCustomGamePresetData();
};

FORCEINLINE uint32 GetTypeHash(const FCustomGamePresetData) { return 0; }
