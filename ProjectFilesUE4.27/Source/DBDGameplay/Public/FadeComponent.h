#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "OnFadePercentChangedDelegate.h"
#include "FadeComponent.generated.h"

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class DBDGAMEPLAY_API UFadeComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintAssignable)
	FOnFadePercentChangedDelegate OnFadePercentChanged;

protected:
	UPROPERTY(EditDefaultsOnly)
	float _fadeDuration;

public:
	UFUNCTION(BlueprintPure)
	float GetFadePercent() const;

public:
	UFadeComponent();
};

FORCEINLINE uint32 GetTypeHash(const UFadeComponent) { return 0; }
