#pragma once

#include "CoreMinimal.h"
#include "GenericPopupScreen.h"
#include "FriendSearchPopupScreen.generated.h"

UCLASS()
class UFriendSearchPopupScreen : public UGenericPopupScreen
{
	GENERATED_BODY()

public:
	UFUNCTION()
	void OnUnblockPlayer(const FString& friendKrakenID);

	UFUNCTION()
	void OnInviteFriend(const FString& friendKrakenID, bool isOffNetwork);

	UFUNCTION()
	void OnFriendSearchStart(const FString& searchText);

	UFUNCTION()
	void OnAcceptFriendInvite(const FString& friendKrakenID);

public:
	UFriendSearchPopupScreen();
};

FORCEINLINE uint32 GetTypeHash(const UFriendSearchPopupScreen) { return 0; }
