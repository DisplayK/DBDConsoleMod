#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "CharacterPositionRecorderComponent.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class GAMEPLAYUTILITIES_API UCharacterPositionRecorderComponent : public UActorComponent
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere)
	float _cacheTimespan;

public:
	UCharacterPositionRecorderComponent();
};

FORCEINLINE uint32 GetTypeHash(const UCharacterPositionRecorderComponent) { return 0; }
