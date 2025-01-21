#pragma once

#include "CoreMinimal.h"
#include "Components/BoxComponent.h"
#include "BoxOcclusionQueryComponent.generated.h"

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class GAMEPLAYUTILITIES_API UBoxOcclusionQueryComponent : public UBoxComponent
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float TimeUntilOccluded;

public:
	UFUNCTION(BlueprintPure)
	float GetVisiblePercentOfScreen() const;

	UFUNCTION(BlueprintPure)
	float GetNumberOfVisiblePixels() const;

	UFUNCTION(BlueprintPure)
	float GetEstimatedRenderedPixelCount() const;

public:
	UBoxOcclusionQueryComponent();
};

FORCEINLINE uint32 GetTypeHash(const UBoxOcclusionQueryComponent) { return 0; }
