#pragma once

#include "CoreMinimal.h"
#include "DBDTableRowBase.h"
#include "ToastButton.h"
#include "UObject/SoftObjectPtr.h"
#include "EToastInputType.h"
#include "Toast.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FToast: public FDBDTableRowBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	float DisplayDuration;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	float Lifetime;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FText ToastText;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TMap<EToastInputType, FToastButton> ButtonsData;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	float DelayBeforeInteraction;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TSoftObjectPtr<UTexture2D> ToastIcon;

public:
	DEADBYDAYLIGHT_API FToast();
};

FORCEINLINE uint32 GetTypeHash(const FToast) { return 0; }
