#pragma once

#include "CoreMinimal.h"
#include "GFxWidgetBinding.generated.h"

USTRUCT(BlueprintType)
struct FGFxWidgetBinding
{
	GENERATED_BODY()

public:
	UPROPERTY()
	FName WidgetName;

	UPROPERTY()
	UClass* WidgetClass;

public:
	SCALEFORMUI_API FGFxWidgetBinding();
};

FORCEINLINE uint32 GetTypeHash(const FGFxWidgetBinding) { return 0; }
