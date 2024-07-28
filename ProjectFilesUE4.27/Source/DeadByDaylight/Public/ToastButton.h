#pragma once

#include "CoreMinimal.h"
#include "ToastButton.generated.h"

USTRUCT(BlueprintType)
struct FToastButton
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FText ButtonText;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	bool IsRegression;

public:
	DEADBYDAYLIGHT_API FToastButton();
};

FORCEINLINE uint32 GetTypeHash(const FToastButton) { return 0; }
