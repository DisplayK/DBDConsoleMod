#pragma once

#include "CoreMinimal.h"
#include "UMGBaseFriendListElement.h"
#include "Styling/SlateBrush.h"
#include "UMGFriendElementWidget.generated.h"

class UImage;
class UButton;

UCLASS(Abstract, EditInlineNew)
class UUMGFriendElementWidget : public UUMGBaseFriendListElement
{
	GENERATED_BODY()

protected:
	UPROPERTY(meta=(BindWidgetOptional))
	UImage* FavoriteSlot;

	UPROPERTY(meta=(BindWidgetOptional))
	UButton* FavoriteButton;

	UPROPERTY(meta=(BindWidgetOptional))
	UImage* SelectionImage;

	UPROPERTY(meta=(BindWidgetOptional))
	UImage* SelectedPicture;

	UPROPERTY(meta=(BindWidgetOptional))
	UImage* FriendIcon;

	UPROPERTY(EditDefaultsOnly)
	FSlateBrush UnFavoriteBrush;

	UPROPERTY(EditDefaultsOnly)
	FSlateBrush FavoriteBrush;

	UPROPERTY(EditDefaultsOnly)
	FSlateBrush MutedBrush;

protected:
	UFUNCTION()
	void HandleSelectionButton();

	UFUNCTION(BlueprintCallable)
	void HandleFavoriteButtonClicked();

public:
	UUMGFriendElementWidget();
};

FORCEINLINE uint32 GetTypeHash(const UUMGFriendElementWidget) { return 0; }
