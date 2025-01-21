#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "Components/ActorComponent.h"
#include "GameEventData.h"
#include "GreenGlyphActivatorComponent.generated.h"

class UGreenGlyphComponent;
class AGenerator;

UCLASS(meta=(BlueprintSpawnableComponent))
class UGreenGlyphActivatorComponent : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(Transient, Export)
	TArray<TWeakObjectPtr<UGreenGlyphComponent>> _greenGlyphComponents;

	UPROPERTY(Transient)
	TArray<AGenerator*> _completedGenerators;

private:
	UFUNCTION(Exec)
	void DBD_ShowAuraGreenGlyphsActive(const bool enabled);

	UFUNCTION()
	void Authority_OnActivateGlyphEvents(const FGameplayTag gameplayTag, const FGameEventData& gameEventData);

	UFUNCTION()
	void Authority_EndGameScenarioBegins(const FGameplayTag gameplayTag, const FGameEventData& gameEventData);

public:
	UGreenGlyphActivatorComponent();
};

FORCEINLINE uint32 GetTypeHash(const UGreenGlyphActivatorComponent) { return 0; }
