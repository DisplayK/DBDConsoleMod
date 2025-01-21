#pragma once

#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "UMGAtlantaCustomMatchLobbyScreen.generated.h"

class UUMGBaseButtonWidget;
class UVerticalBox;
class UTextBlock;

UCLASS(Abstract, EditInlineNew)
class DBDUIVIEWSMOBILE_API UUMGAtlantaCustomMatchLobbyScreen : public UMobileBaseUserWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UUMGBaseButtonWidget* EditButton;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UVerticalBox* RulesBox;

	UPROPERTY(BlueprintReadWrite, meta=(BindWidgetOptional))
	UTextBlock* CustomMatchTitle;

	UPROPERTY(BlueprintReadWrite, meta=(BindWidgetOptional))
	UTextBlock* MatchRulesTitle;

protected:
	UFUNCTION()
	void HandleEditConfigButtonClicked();

public:
	UUMGAtlantaCustomMatchLobbyScreen();
};

FORCEINLINE uint32 GetTypeHash(const UUMGAtlantaCustomMatchLobbyScreen) { return 0; }
