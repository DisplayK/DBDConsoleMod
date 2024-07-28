#pragma once

#include "CoreMinimal.h"
#include "PartySessionSettings.generated.h"

USTRUCT()
struct FPartySessionSettings
{
	GENERATED_BODY()

private:
	UPROPERTY()
	FString _sessionId;

	UPROPERTY()
	TMap<FString, FString> _gameSessionInfos;

	UPROPERTY()
	FString _owningUserId;

	UPROPERTY()
	FString _owningUserName;

	UPROPERTY()
	bool _isDedicated;

	UPROPERTY()
	int64 _matchmakingTimestamp;

public:
	SOCIALPARTY_API FPartySessionSettings();
};

FORCEINLINE uint32 GetTypeHash(const FPartySessionSettings) { return 0; }
