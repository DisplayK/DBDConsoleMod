#pragma once

#include "CoreMinimal.h"
#include "PlayerProfileViewInterface.h"
#include "CoreBaseUserWidget.h"
#include "CorePlayerProfileWidget.generated.h"

class UCorePlayerRankWidget;
class UCorePlayerLevelWidget;
class UCoreWalletWidget;
class UCorePlayerNameWidget;

UCLASS(EditInlineNew)
class DBDUIVIEWSCORE_API UCorePlayerProfileWidget : public UCoreBaseUserWidget, public IPlayerProfileViewInterface
{
	GENERATED_BODY()

protected:
	UPROPERTY(BlueprintReadWrite, meta=(BindWidgetOptional))
	UCoreWalletWidget* Wallet;

	UPROPERTY(BlueprintReadWrite, meta=(BindWidgetOptional))
	UCorePlayerNameWidget* PlayerName;

	UPROPERTY(BlueprintReadWrite, meta=(BindWidgetOptional))
	UCorePlayerLevelWidget* PlayerLevel;

	UPROPERTY(BlueprintReadWrite, meta=(BindWidgetOptional))
	UCorePlayerRankWidget* PlayerRank;

public:
	UCorePlayerProfileWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCorePlayerProfileWidget) { return 0; }
