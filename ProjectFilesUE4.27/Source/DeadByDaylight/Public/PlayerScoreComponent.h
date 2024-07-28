#pragma once

#include "CoreMinimal.h"
#include "UObject/SoftObjectPtr.h"
#include "Components/ActorComponent.h"
#include "PlayerScoreComponent.generated.h"

class UPlayerScoreEmitter;
class UDataTable;

UCLASS(meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UPlayerScoreComponent : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere)
	TSoftObjectPtr<UDataTable> _emitterDB;

	UPROPERTY(Transient)
	TSet<UPlayerScoreEmitter*> _emitters;

public:
	UPlayerScoreComponent();
};

FORCEINLINE uint32 GetTypeHash(const UPlayerScoreComponent) { return 0; }
