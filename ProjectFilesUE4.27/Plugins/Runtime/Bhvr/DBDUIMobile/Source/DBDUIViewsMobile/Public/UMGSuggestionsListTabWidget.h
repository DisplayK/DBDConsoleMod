#pragma once

#include "CoreMinimal.h"
#include "UMGFriendBaseTabListWidget.h"
#include "UMGSuggestionsListTabWidget.generated.h"

class UUMGExpandableListWidget;

UCLASS(Abstract, EditInlineNew)
class DBDUIVIEWSMOBILE_API UUMGSuggestionsListTabWidget : public UUMGFriendBaseTabListWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(meta=(BindWidgetOptional))
	UUMGExpandableListWidget* PlayedWithFriendsExpandableList;

	UPROPERTY(meta=(BindWidgetOptional))
	UUMGExpandableListWidget* SocialFriendsExpandableList;

public:
	UUMGSuggestionsListTabWidget();
};

FORCEINLINE uint32 GetTypeHash(const UUMGSuggestionsListTabWidget) { return 0; }
