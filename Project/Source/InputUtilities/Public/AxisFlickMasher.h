#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "AxisFlickMasher.generated.h"

class UInputComponent;
class UAxisFlick;

UCLASS(meta=(BlueprintSpawnableComponent))
class INPUTUTILITIES_API UAxisFlickMasher : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(Export)
	UInputComponent* _inputComponent;

	UPROPERTY()
	UAxisFlick* _axisFlick1;

	UPROPERTY()
	UAxisFlick* _axisFlick2;

private:
	UFUNCTION()
	void OnAxisFlicked2();

	UFUNCTION()
	void OnAxisFlicked1();

public:
	UAxisFlickMasher();
};

FORCEINLINE uint32 GetTypeHash(const UAxisFlickMasher) { return 0; }
