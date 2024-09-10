#pragma once

#include "CoreMinimal.h"
#include "BaseCamperCollectable.h"
#include "MapCollectable.generated.h"

class UChargerComponent;
class UChargeableComponent;
class UActorKnowledgeCollection;

UCLASS()
class DBDGAMEPLAY_API AMapCollectable : public ABaseCamperCollectable
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintImplementableEvent)
	UChargerComponent* GetChargerComponent() const;

	UFUNCTION(BlueprintImplementableEvent)
	UChargeableComponent* GetChargeableComponent() const;

	UFUNCTION(BlueprintImplementableEvent)
	UActorKnowledgeCollection* GetActorKnowledgeCollection() const;

public:
	AMapCollectable();
};

FORCEINLINE uint32 GetTypeHash(const AMapCollectable) { return 0; }
