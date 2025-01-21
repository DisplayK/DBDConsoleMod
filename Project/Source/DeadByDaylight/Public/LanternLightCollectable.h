#pragma once

#include "CoreMinimal.h"
#include "Collectable.h"
#include "LanternLightCollectable.generated.h"

class ALanternInteractable;

UCLASS()
class DEADBYDAYLIGHT_API ALanternLightCollectable : public ACollectable
{
	GENERATED_BODY()

private:
	UPROPERTY(Replicated, Transient)
	ALanternInteractable* _parentLantern;

public:
	UFUNCTION(BlueprintCallable)
	void SetParentLantern(ALanternInteractable* parentLantern);

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	ALanternLightCollectable();
};

FORCEINLINE uint32 GetTypeHash(const ALanternLightCollectable) { return 0; }
