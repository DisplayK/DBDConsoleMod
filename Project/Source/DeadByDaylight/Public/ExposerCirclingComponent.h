#pragma once

#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "ExposerCirclingComponent.generated.h"

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UExposerCirclingComponent : public USceneComponent
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool DirectionFollows;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MinHeight;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MaxHeight;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MinRadius;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MaxRadius;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float CirclingSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float DistanceBetweenPoints;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float BezierModifier;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Samples;

public:
	UFUNCTION(BlueprintCallable)
	void SetIsCircling(bool circling);

	UFUNCTION(BlueprintCallable)
	void Reset();

public:
	UExposerCirclingComponent();
};

FORCEINLINE uint32 GetTypeHash(const UExposerCirclingComponent) { return 0; }
