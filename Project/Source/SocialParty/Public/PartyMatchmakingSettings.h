#pragma once

#include "CoreMinimal.h"
#include "EMatchmakingState.h"
#include "PartyMatchmakingSettings.generated.h"

USTRUCT()
struct FPartyMatchmakingSettings
{
	GENERATED_BODY()

private:
	UPROPERTY()
	TArray<FString> _playerIds;

	UPROPERTY()
	EMatchmakingState _matchmakingState;

	UPROPERTY()
	int64 _startMatchmakingDateTimestamp;

	UPROPERTY()
	uint32 _matchIncentive;

	UPROPERTY()
	bool _isInFinalCountdown;

	UPROPERTY()
	int32 _postMatchmakingTransitionId;

public:
	SOCIALPARTY_API FPartyMatchmakingSettings();
};

FORCEINLINE uint32 GetTypeHash(const FPartyMatchmakingSettings) { return 0; }
