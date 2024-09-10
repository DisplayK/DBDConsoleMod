#pragma once

#include "CoreMinimal.h"
#include "BloodDecal.h"
#include "Components/ActorComponent.h"
#include "BloodTrailComponent.generated.h"

class UBloodTrailSettings;
class UBloodDecalEffect;
class UDBDDecalComponent;
class UDecalSpawner;

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UBloodTrailComponent : public UActorComponent
{
	GENERATED_BODY()

protected:
	UPROPERTY(Transient)
	UBloodTrailSettings* _bloodTrailSettings;

	UPROPERTY(Transient)
	TMap<UDBDDecalComponent*, FBloodDecal> _bloodDecals;

private:
	UPROPERTY(Transient)
	UBloodDecalEffect* _bloodDecalEffect;

	UPROPERTY(Transient)
	UDecalSpawner* _decalSpawner;

public:
	UFUNCTION(BlueprintCallable)
	void ConditionalStartBleeding();

public:
	UBloodTrailComponent();
};

FORCEINLINE uint32 GetTypeHash(const UBloodTrailComponent) { return 0; }
