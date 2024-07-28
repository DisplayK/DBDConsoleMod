#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EnduranceVFXComponent.generated.h"

class UGameplayModifierContainer;

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UEnduranceVFXComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly)
	void ShowHighlight(UGameplayModifierContainer* preventKOSource);

public:
	UEnduranceVFXComponent();
};

FORCEINLINE uint32 GetTypeHash(const UEnduranceVFXComponent) { return 0; }
