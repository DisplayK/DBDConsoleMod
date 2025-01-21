#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EDBDCameraSocketID.h"
#include "ClippedActor.h"
#include "ActorClipperComponent.generated.h"

class AActor;
class UPrimitiveCollection;
class USphereComponent;

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UActorClipperComponent : public UActorComponent
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	USphereComponent* Shape;

private:
	UPROPERTY(Transient)
	TMap<AActor*, FClippedActor> _clippedActors;

	UPROPERTY(Transient)
	TWeakObjectPtr<UPrimitiveCollection> _clippables;

public:
	UFUNCTION(BlueprintCallable)
	void SetPrimitiveCollection(const UPrimitiveCollection* clippables);

private:
	UFUNCTION()
	void OnOwnerLocallyObservedChanged(bool locallyObserved);

	UFUNCTION()
	void OnCameraChanged(EDBDCameraSocketID socketId);

public:
	UActorClipperComponent();
};

FORCEINLINE uint32 GetTypeHash(const UActorClipperComponent) { return 0; }
