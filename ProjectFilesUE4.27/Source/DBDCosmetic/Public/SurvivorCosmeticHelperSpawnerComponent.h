#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Templates/SubclassOf.h"
#include "SurvivorCosmeticHelperSpawnerComponent.generated.h"

class UDataTable;
class ASurvivorCosmeticHelperActor;

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class DBDCOSMETIC_API USurvivorCosmeticHelperSpawnerComponent : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	UDataTable* _survivorCosmeticActorHelperDB;

	UPROPERTY(Transient)
	TArray<ASurvivorCosmeticHelperActor*> survivorCosmeticHelperActors;

public:
	UFUNCTION(BlueprintPure)
	TArray<ASurvivorCosmeticHelperActor*> GetCosmeticHelperActors() const;

	UFUNCTION(BlueprintPure)
	TArray<ASurvivorCosmeticHelperActor*> GetCosmeticHelperActorByClass(const TSubclassOf<ASurvivorCosmeticHelperActor> cosmeticHelperActorClassType) const;

public:
	USurvivorCosmeticHelperSpawnerComponent();
};

FORCEINLINE uint32 GetTypeHash(const USurvivorCosmeticHelperSpawnerComponent) { return 0; }
