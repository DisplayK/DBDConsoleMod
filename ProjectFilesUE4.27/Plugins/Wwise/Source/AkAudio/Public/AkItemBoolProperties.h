#pragma once

#include "CoreMinimal.h"
#include "Components/Widget.h"
#include "OnItemBoolPropertySelectionChanged.h"
#include "OnItemBoolPropertyDragDetected.h"
#include "AkItemBoolProperties.generated.h"

UCLASS()
class AKAUDIO_API UAkItemBoolProperties : public UWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintAssignable)
	FOnItemBoolPropertySelectionChanged OnSelectionChanged;

	UPROPERTY(BlueprintAssignable)
	FOnItemBoolPropertyDragDetected OnPropertyDragged;

public:
	UFUNCTION(BlueprintCallable, BlueprintCosmetic)
	void SetSearchText(const FString& newText);

	UFUNCTION(BlueprintPure, BlueprintCosmetic)
	FString GetSelectedProperty() const;

	UFUNCTION(BlueprintPure, BlueprintCosmetic)
	FString GetSearchText() const;

public:
	UAkItemBoolProperties();
};

FORCEINLINE uint32 GetTypeHash(const UAkItemBoolProperties) { return 0; }
