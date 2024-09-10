#pragma once

#include "CoreMinimal.h"
#include "Components/Button.h"
#include "DBDButton.generated.h"

UCLASS()
class UDBDButton : public UButton
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditInstanceOnly)
	bool SendAnalyticsData;

	UPROPERTY(EditInstanceOnly)
	FString AnalyticsName;

public:
	UDBDButton();
};

FORCEINLINE uint32 GetTypeHash(const UDBDButton) { return 0; }
