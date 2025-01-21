#pragma once

#include "CoreMinimal.h"
#include "ScreenBase.h"
#include "AtlantaFriendsListScreenUMG.generated.h"

class UUMGAtlantaFriendListScreen;

UCLASS()
class UAtlantaFriendsListScreenUMG : public UScreenBase
{
	GENERATED_BODY()

protected:
	UPROPERTY(meta=(BindWidgetOptional))
	UUMGAtlantaFriendListScreen* _atlantaFriendListScreen;

protected:
	UFUNCTION()
	void HandleResearchButtonClicked(const FText& searchInput);

	UFUNCTION()
	void HandleClosedButtonClicked();

public:
	UAtlantaFriendsListScreenUMG();
};

FORCEINLINE uint32 GetTypeHash(const UAtlantaFriendsListScreenUMG) { return 0; }
