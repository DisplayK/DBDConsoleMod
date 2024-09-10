#pragma once

#include "CoreMinimal.h"
#include "Subsystems/LocalPlayerSubsystem.h"
#include "WalesCypherHandler.generated.h"

class UWalesCypherParameters;

UCLASS()
class UWalesCypherHandler : public ULocalPlayerSubsystem
{
	GENERATED_BODY()

private:
	UPROPERTY()
	UWalesCypherParameters* _walesCypherParams;

public:
	UWalesCypherHandler();
};

FORCEINLINE uint32 GetTypeHash(const UWalesCypherHandler) { return 0; }
