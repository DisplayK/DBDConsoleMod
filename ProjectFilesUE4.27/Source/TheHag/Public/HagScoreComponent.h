#pragma once

#include "CoreMinimal.h"
#include "DBDTunableRowHandle.h"
#include "Components/ActorComponent.h"
#include "Engine/EngineTypes.h"
#include "HagScoreComponent.generated.h"

class AActor;

UCLASS(meta=(BlueprintSpawnableComponent))
class THEHAG_API UHagScoreComponent : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _trapAttackDuration;

private:
	UFUNCTION()
	void Authority_OnActorEndPlay(AActor* actor, TEnumAsByte<EEndPlayReason::Type> endPlayReason);

public:
	UHagScoreComponent();
};

FORCEINLINE uint32 GetTypeHash(const UHagScoreComponent) { return 0; }
