#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "Components/ActorComponent.h"
#include "KillerRedStainUpdateStrategy.generated.h"

class UCurveFloat;

UCLASS(meta=(BlueprintSpawnableComponent))
class UKillerRedStainUpdateStrategy : public UActorComponent
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditDefaultsOnly)
	UCurveFloat* _stealthRatioToRedStainIntensityCurve;

	UPROPERTY(EditDefaultsOnly)
	FGameplayTagContainer _hideRedStainStateTags;

private:
	UFUNCTION()
	void OnHeadHiddenChanged(bool isHidden);

public:
	UKillerRedStainUpdateStrategy();
};

FORCEINLINE uint32 GetTypeHash(const UKillerRedStainUpdateStrategy) { return 0; }
