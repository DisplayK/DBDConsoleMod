#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EMapActorCategory.h"
#include "MapActorComponent.generated.h"

class ADBDPlayer;
class UPrimitiveComponent;

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UMapActorComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EMapActorCategory Category;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export)
	UPrimitiveComponent* _mapActorCollider;

private:
	UPROPERTY(Transient)
	bool _detectionEnabled;

public:
	UFUNCTION(BlueprintCallable, NetMulticast, Reliable, BlueprintAuthorityOnly)
	void Multicast_SetDetectionEnabled(bool enabled);

	UFUNCTION(BlueprintPure)
	bool IsKnownBy(const ADBDPlayer* character) const;

	UFUNCTION(BlueprintPure)
	bool GetDetectionEnabled() const;

public:
	UMapActorComponent();
};

FORCEINLINE uint32 GetTypeHash(const UMapActorComponent) { return 0; }
