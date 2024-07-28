#pragma once

#include "CoreMinimal.h"
#include "InteractionRequest.generated.h"

class UInteractionDefinition;
class ADBDPlayer;

USTRUCT()
struct FInteractionRequest
{
	GENERATED_BODY()

private:
	UPROPERTY(Transient, Export)
	UInteractionDefinition* _interaction;

	UPROPERTY(Transient)
	ADBDPlayer* _requester;

public:
	DEADBYDAYLIGHT_API FInteractionRequest();
};

FORCEINLINE uint32 GetTypeHash(const FInteractionRequest) { return 0; }
