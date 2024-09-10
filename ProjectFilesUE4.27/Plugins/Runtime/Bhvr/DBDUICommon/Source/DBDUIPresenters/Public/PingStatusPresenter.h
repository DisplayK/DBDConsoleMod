#pragma once

#include "CoreMinimal.h"
#include "HudPresenter.h"
#include "Templates/SubclassOf.h"
#include "PingStatusPresenter.generated.h"

class UUserWidget;

UCLASS(EditInlineNew)
class DBDUIPRESENTERS_API UPingStatusPresenter : public UHudPresenter
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TSubclassOf<UUserWidget> PingStatusWidgetClass;

public:
	UPingStatusPresenter();
};

FORCEINLINE uint32 GetTypeHash(const UPingStatusPresenter) { return 0; }
