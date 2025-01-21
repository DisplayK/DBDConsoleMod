#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BubbleIndicator.generated.h"

class UStaticMesh;

UCLASS()
class DEADBYDAYLIGHT_API ABubbleIndicator : public AActor
{
	GENERATED_BODY()

protected:
	UPROPERTY(BlueprintReadOnly)
	float _lifeTime;

	UPROPERTY(BlueprintReadOnly)
	bool _displayToLocallyObserved;

	UPROPERTY(BlueprintReadOnly)
	bool _isInRange;

	UPROPERTY(BlueprintReadOnly)
	bool _isPreSpawned;

public:
	UFUNCTION(BlueprintImplementableEvent)
	void SetSilhouette(UStaticMesh* staticMesh);

protected:
	UFUNCTION(BlueprintCallable)
	void DeactivateBubble();

public:
	UFUNCTION(BlueprintImplementableEvent)
	void ActivateBubbleFX(const float duration);

public:
	ABubbleIndicator();
};

FORCEINLINE uint32 GetTypeHash(const ABubbleIndicator) { return 0; }
