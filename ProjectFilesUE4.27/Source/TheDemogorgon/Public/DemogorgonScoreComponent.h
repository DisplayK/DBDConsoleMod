#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "DemogorgonScoreComponent.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class THEDEMOGORGON_API UDemogorgonScoreComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	UDemogorgonScoreComponent();
};

FORCEINLINE uint32 GetTypeHash(const UDemogorgonScoreComponent) { return 0; }
