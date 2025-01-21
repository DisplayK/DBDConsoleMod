#pragma once

#include "CoreMinimal.h"
#include "OnSpectatePlayer.h"
#include "UmgPlayerHud.h"
#include "OnLeaveSpectateClicked.h"
#include "UmgSpectatorHud.generated.h"

UCLASS(Abstract, EditInlineNew)
class DEADBYDAYLIGHT_API UUmgSpectatorHud : public UUmgPlayerHud
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintAssignable)
	FOnLeaveSpectateClicked OnLeaveSpectateClicked;

	UPROPERTY(BlueprintAssignable)
	FOnSpectatePlayer OnPlayerSpectate;

private:
	UFUNCTION()
	void OnPlayerStatusSelected(const FString& playerName);

public:
	UFUNCTION(BlueprintCallable)
	void HandleLeaveSpectateClicked();

public:
	UUmgSpectatorHud();
};

FORCEINLINE uint32 GetTypeHash(const UUmgSpectatorHud) { return 0; }
