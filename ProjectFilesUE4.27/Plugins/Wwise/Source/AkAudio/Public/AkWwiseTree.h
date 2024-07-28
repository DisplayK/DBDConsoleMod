#pragma once

#include "CoreMinimal.h"
#include "Components/Widget.h"
#include "OnItemSelectionChanged.h"
#include "OnItemDragDetected.h"
#include "AkWwiseObjectDetails.h"
#include "AkWwiseTree.generated.h"

UCLASS()
class AKAUDIO_API UAkWwiseTree : public UWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintAssignable)
	FOnItemSelectionChanged OnSelectionChanged;

	UPROPERTY(BlueprintAssignable)
	FOnItemDragDetected OnItemDragged;

public:
	UFUNCTION(BlueprintCallable, BlueprintCosmetic)
	void SetSearchText(const FString& newText);

	UFUNCTION(BlueprintPure, BlueprintCosmetic)
	FAkWwiseObjectDetails GetSelectedItem() const;

	UFUNCTION(BlueprintPure, BlueprintCosmetic)
	FString GetSearchText() const;

public:
	UAkWwiseTree();
};

FORCEINLINE uint32 GetTypeHash(const UAkWwiseTree) { return 0; }
