#pragma once

#include "CoreMinimal.h"
#include "ScreenBase.h"
#include "LoadingScreen.generated.h"

UCLASS()
class ULoadingScreen : public UScreenBase
{
	GENERATED_BODY()

public:
	UFUNCTION()
	void OnLoadingTextTimerComplete() const;

public:
	ULoadingScreen();
};

FORCEINLINE uint32 GetTypeHash(const ULoadingScreen) { return 0; }
