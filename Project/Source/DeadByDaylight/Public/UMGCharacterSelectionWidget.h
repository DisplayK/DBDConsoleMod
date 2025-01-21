#pragma once

#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "OnCharacterRoleButtonClickedEvent.h"
#include "OnCharacterInfoButtonClickedEvent.h"
#include "OnCharacterSelectedEvent.h"
#include "UMGCharacterSelectionWidget.generated.h"

class UUMGCharacterPageScrollWidget;
class UUMGCharacterSelectSubmenu;
class UWidgetSwitcher;
class UUMGCharacterInfoWidget;

UCLASS(EditInlineNew)
class DEADBYDAYLIGHT_API UUMGCharacterSelectionWidget : public UMobileBaseUserWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintAssignable)
	FOnCharacterSelectedEvent OnCharacterSelected;

	UPROPERTY(BlueprintAssignable)
	FOnCharacterRoleButtonClickedEvent OnCharacterRoleButtonClicked;

	UPROPERTY(BlueprintAssignable)
	FOnCharacterInfoButtonClickedEvent OnCharacterInfoButtonClicked;

protected:
	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UUMGCharacterPageScrollWidget* CharacterPageScrollWidget;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UUMGCharacterSelectSubmenu* CharacterSelectSubMenu;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UUMGCharacterInfoWidget* CharacterInfoWidget;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UWidgetSwitcher* CharacterSwitcher;

	UPROPERTY(BlueprintReadOnly)
	bool _isKiller;

protected:
	UFUNCTION()
	void SwitchPanel();

	UFUNCTION()
	void BroadcastSelectedCharacter(int32 characterIndex);

	UFUNCTION()
	void BroadcastRoleButtonClicked();

public:
	UUMGCharacterSelectionWidget();
};

FORCEINLINE uint32 GetTypeHash(const UUMGCharacterSelectionWidget) { return 0; }
