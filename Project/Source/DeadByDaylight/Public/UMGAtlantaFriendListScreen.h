#pragma once

#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "UObject/SoftObjectPtr.h"
#include "FriendWidgetList.h"
#include "ActionOnFriend.h"
#include "EActionOnFriendType.h"
#include "UMGAtlantaFriendListScreen.generated.h"

class UHorizontalBox;
class UUMGBaseButtonWidget;
class UUMGBaseFriendListContextualMenuWidget;
class UUMGFriendListTabWidget;
class UUMGBaseFriendListElement;
class UUMGSuggestionsListTabWidget;
class UWidgetSwitcher;
class UTextBlock;
class UUMGFriendSearchBarWidget;
class UUMGRequestsListTabWidget;
class UUMGFriendTabButtonWidget;
class UExpandableArea;

UCLASS(Abstract, EditInlineNew)
class UUMGAtlantaFriendListScreen : public UMobileBaseUserWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(meta=(BindWidgetOptional))
	UWidgetSwitcher* ListSwitcher;

	UPROPERTY(meta=(BindWidgetOptional))
	UWidgetSwitcher* SearchResultSwitcher;

	UPROPERTY(meta=(BindWidgetOptional))
	UUMGBaseFriendListElement* NonFriendSearchResult;

	UPROPERTY(meta=(BindWidgetOptional))
	UUMGBaseFriendListElement* RequestReceivedSearchResult;

	UPROPERTY(meta=(BindWidgetOptional))
	UUMGBaseFriendListElement* RequestSentSearchResult;

	UPROPERTY(meta=(BindWidgetOptional))
	UUMGBaseFriendListElement* FriendSearchResult;

	UPROPERTY(meta=(BindWidgetOptional))
	UTextBlock* SearchFailureText;

	UPROPERTY(meta=(BindWidgetOptional))
	UUMGBaseButtonWidget* CloseButton;

	UPROPERTY(meta=(BindWidgetOptional))
	UUMGFriendSearchBarWidget* SearchBar;

	UPROPERTY(meta=(BindWidgetOptional))
	UHorizontalBox* ButtonTabContainer;

	UPROPERTY(meta=(BindWidgetOptional))
	UUMGFriendListTabWidget* FriendListTabWidget;

	UPROPERTY(meta=(BindWidgetOptional))
	UUMGSuggestionsListTabWidget* SuggestionListTabWidget;

	UPROPERTY(meta=(BindWidgetOptional))
	UUMGRequestsListTabWidget* RequestListTabWidget;

	UPROPERTY(meta=(BindWidgetOptional))
	UUMGFriendTabButtonWidget* FriendsTabButton;

	UPROPERTY(meta=(BindWidgetOptional))
	UUMGFriendTabButtonWidget* SuggestionsTabButton;

	UPROPERTY(meta=(BindWidgetOptional))
	UUMGFriendTabButtonWidget* RequestsTabButton;

	UPROPERTY(Transient, meta=(BindWidgetOptional))
	UUMGBaseFriendListContextualMenuWidget* CurrentContextualMenuWidget;

	UPROPERTY(EditInstanceOnly)
	TSoftClassPtr<UUMGBaseFriendListElement> FriendWidget;

	UPROPERTY(EditInstanceOnly)
	TSoftClassPtr<UUMGBaseFriendListElement> RequestSentWidget;

	UPROPERTY(EditInstanceOnly)
	TSoftClassPtr<UUMGBaseFriendListElement> FriendRequestReceivedWidget;

	UPROPERTY(EditInstanceOnly)
	TSoftClassPtr<UUMGBaseFriendListElement> FriendsSuggestionWidget;

	UPROPERTY(EditInstanceOnly)
	TSoftClassPtr<UUMGBaseFriendListElement> FriendsSuggestion;

	UPROPERTY(EditInstanceOnly)
	TSoftClassPtr<UUMGBaseFriendListElement> FriendPartyInviteWidgetClass;

	UPROPERTY(EditInstanceOnly)
	TSoftClassPtr<UUMGBaseFriendListContextualMenuWidget> ContextualMenuInvite;

	UPROPERTY(EditInstanceOnly)
	TSoftClassPtr<UUMGBaseFriendListContextualMenuWidget> ContextualMenuConfirmDeclineAction;

private:
	UPROPERTY()
	TMap<FString, FFriendWidgetList> _existingFriendListWidgets;

	UPROPERTY(Export)
	TMap<FString, UUMGBaseFriendListElement*> _existingFriendInvitePartyWidget;

private:
	UFUNCTION()
	void VerifyReceivedFriendRequestFocus(UExpandableArea* expandableArea, bool bIsExpanded);

	UFUNCTION()
	void OnFinishedOutAnimation();

	UFUNCTION()
	void HandleTabButtonClicked(uint8 tabIndex);

	UFUNCTION()
	void HandleSearchInputChanged(const FText& inputText);

	UFUNCTION()
	void HandleSearchButtonClicked();

	UFUNCTION()
	void HandleOnActionOnFriend(const FActionOnFriend& actionOnFriend);

	UFUNCTION()
	void HandleContextualMenuAction(EActionOnFriendType action);

	UFUNCTION()
	void HandleCloseButtonClicked();

public:
	UUMGAtlantaFriendListScreen();
};

FORCEINLINE uint32 GetTypeHash(const UUMGAtlantaFriendListScreen) { return 0; }
