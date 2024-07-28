#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "InputMasher.generated.h"

class UInputComponent;

UCLASS(meta=(BlueprintSpawnableComponent))
class INPUTUTILITIES_API UInputMasher : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(Transient, Export)
	UInputComponent* _inputComponent;

public:
	UInputMasher();
};

FORCEINLINE uint32 GetTypeHash(const UInputMasher) { return 0; }
