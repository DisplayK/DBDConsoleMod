#pragma once

#include "CoreMinimal.h"
#include "ScreenBase.h"
#include "DailyRitualsScreen.generated.h"

UCLASS()
class UDailyRitualsScreen : public UScreenBase
{
	GENERATED_BODY()

private:
	UFUNCTION()
	void OnRemoveRitual(const FString& id);

	UFUNCTION()
	void OnClosed();

	UFUNCTION()
	void OnClaimRitual(const FString& id);

	UFUNCTION()
	void OnClaimAllRituals();

public:
	UDailyRitualsScreen();
};

FORCEINLINE uint32 GetTypeHash(const UDailyRitualsScreen) { return 0; }
