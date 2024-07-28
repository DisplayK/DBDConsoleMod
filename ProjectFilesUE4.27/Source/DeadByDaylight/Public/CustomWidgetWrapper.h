#pragma once

#include "CoreMinimal.h"
#include "Components/CanvasPanel.h"
#include "OnVersionDelegate.h"
#include "GameplayTagContainer.h"
#include "CustomWidgetWrapper.generated.h"

class UCustomWidgetWrapper;
class UCustomWidgetWrapperInitializer;

UCLASS(Abstract)
class DEADBYDAYLIGHT_API UCustomWidgetWrapper : public UCanvasPanel
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintAssignable)
	FOnVersionDelegate OnVersion;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FGameplayTag Id;

	UPROPERTY(EditAnywhere, Export)
	UCustomWidgetWrapper* ManuallyParentWrapper;

	UPROPERTY(EditAnywhere, Export)
	TArray<UCustomWidgetWrapper*> ManuallyChildWrappers;

	UPROPERTY(Transient, Export)
	UCustomWidgetWrapperInitializer* InitializerWidget;

public:
	UFUNCTION(BlueprintCallable)
	void ApplyVersion(int32 version);

	UFUNCTION(BlueprintCallable)
	void ApplyScale(float scale);

	UFUNCTION(BlueprintCallable)
	void ApplyOpacity(float opacity);

public:
	UCustomWidgetWrapper();
};

FORCEINLINE uint32 GetTypeHash(const UCustomWidgetWrapper) { return 0; }
