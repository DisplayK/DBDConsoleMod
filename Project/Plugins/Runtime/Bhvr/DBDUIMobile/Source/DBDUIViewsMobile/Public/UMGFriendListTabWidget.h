#pragma once

#include "CoreMinimal.h"
#include "UMGFriendBaseTabListWidget.h"
#include "UMGFriendListTabWidget.generated.h"

class UUMGExpandableListWidget;

UCLASS(Abstract, EditInlineNew)
class DBDUIVIEWSMOBILE_API UUMGFriendListTabWidget : public UUMGFriendBaseTabListWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(meta=(BindWidgetOptional))
	UUMGExpandableListWidget* SentInviteToParty;

	UPROPERTY(meta=(BindWidgetOptional))
	UUMGExpandableListWidget* ConnectedFriendsExpandableList;

	UPROPERTY(meta=(BindWidgetOptional))
	UUMGExpandableListWidget* DisconnectedFriendsExpandableList;

public:
	UUMGFriendListTabWidget();
};

FORCEINLINE uint32 GetTypeHash(const UUMGFriendListTabWidget) { return 0; }
