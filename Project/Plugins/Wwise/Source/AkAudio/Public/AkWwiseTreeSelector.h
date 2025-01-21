#pragma once

#include "CoreMinimal.h"
#include "Components/Widget.h"
#include "OnItemSelectionChanged.h"
#include "OnItemDragDetected.h"
#include "AkWwiseTreeSelector.generated.h"

UCLASS()
class AKAUDIO_API UAkWwiseTreeSelector : public UWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintAssignable)
	FOnItemSelectionChanged OnSelectionChanged;

	UPROPERTY(BlueprintAssignable)
	FOnItemDragDetected OnItemDragged;

public:
	UAkWwiseTreeSelector();
};

FORCEINLINE uint32 GetTypeHash(const UAkWwiseTreeSelector) { return 0; }
