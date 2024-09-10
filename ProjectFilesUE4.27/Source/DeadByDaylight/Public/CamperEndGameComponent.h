#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Templates/SubclassOf.h"
#include "CamperEndGameComponent.generated.h"

class AEndGameEntity;

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UCamperEndGameComponent : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<AEndGameEntity> _endGameEntityClass;

	UPROPERTY(Replicated)
	float _delayBeforeSacrifice;

	UPROPERTY(Replicated)
	bool _readyToBeSacrificed;

public:
	UFUNCTION(BlueprintCallable)
	void OnEndGameSacrificeEnd();

private:
	UFUNCTION()
	void OnDelayBeforeSacrificeEnd();

public:
	UFUNCTION(BlueprintPure)
	bool GetSacrificedByEndGame() const;

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UCamperEndGameComponent();
};

FORCEINLINE uint32 GetTypeHash(const UCamperEndGameComponent) { return 0; }
