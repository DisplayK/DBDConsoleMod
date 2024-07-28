#pragma once

#include "CoreMinimal.h"
#include "EPartyPostMatchmakingState.h"
#include "EPartyPostMatchmakingRole.h"
#include "EquippedPlayerCustomization.h"
#include "SocialPartyMember.generated.h"

USTRUCT()
struct FSocialPartyMember
{
	GENERATED_BODY()

private:
	UPROPERTY()
	FEquippedPlayerCustomization _playerCustomization;

	UPROPERTY()
	FString _playerName;

	UPROPERTY()
	FString _platformSessionId;

	UPROPERTY()
	FString _uniquePlayerId;

	UPROPERTY()
	int32 _playerRank;

	UPROPERTY()
	int32 _characterLevel;

	UPROPERTY()
	int32 _prestigeLevel;

	UPROPERTY()
	int32 _gameRole;

	UPROPERTY()
	int32 _characterId;

	UPROPERTY()
	FName _powerId;

	UPROPERTY()
	int32 _location;

	UPROPERTY()
	int32 _queueDelayIteration;

	UPROPERTY()
	bool _ready;

	UPROPERTY()
	bool _crossplayAllowed;

	UPROPERTY()
	FString _playerPlatform;

	UPROPERTY()
	FString _playerProvider;

	UPROPERTY()
	FString _matchId;

	UPROPERTY()
	EPartyPostMatchmakingRole _postMatchmakingRole;

	UPROPERTY()
	EPartyPostMatchmakingState _postMatchmakingState;

	UPROPERTY()
	uint8 _roleRequested;

	UPROPERTY()
	uint8 _anonymousSuffix;

	UPROPERTY()
	bool _isStateInitialized;

	UPROPERTY()
	int64 _disconnectionPenaltyEndOfBan;

public:
	SOCIALPARTY_API FSocialPartyMember();
};

FORCEINLINE uint32 GetTypeHash(const FSocialPartyMember) { return 0; }
