#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "Components/ActorComponent.h"
#include "QueryInstanceCollection.h"
#include "GameplayTagContainerComponent.generated.h"

class UObject;

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class GAMEPLAYTAGUTILITIES_API UGameplayTagContainerComponent : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(Transient)
	TMap<FGameplayTag, FQueryInstanceCollection> _tagToQueries;

	UPROPERTY(Transient)
	TMap<UObject*, FQueryInstanceCollection> _ownerToQueries;

public:
	UFUNCTION(BlueprintCallable)
	void Remove(FGameplayTag state);

	UFUNCTION(BlueprintCallable)
	void Add(FGameplayTag state);

public:
	UGameplayTagContainerComponent();
};

FORCEINLINE uint32 GetTypeHash(const UGameplayTagContainerComponent) { return 0; }
