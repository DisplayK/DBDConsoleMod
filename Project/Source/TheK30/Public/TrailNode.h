#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "UObject/NoExportTypes.h"
#include "TrailNode.generated.h"

UCLASS()
class ATrailNode : public AActor
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadOnly, ReplicatedUsing=OnRep_PreviousNodePosition, Transient)
	FVector PreviousNodePosition;

protected:
	UFUNCTION()
	void OnRep_PreviousNodePosition();

	UFUNCTION(BlueprintPure)
	bool IsOwnerLocallyObserved() const;

	UFUNCTION(BlueprintPure)
	bool IsFirstNode() const;

public:
	UFUNCTION(BlueprintImplementableEvent)
	void Cosmetic_PrepareForRemoval();

protected:
	UFUNCTION(BlueprintImplementableEvent)
	void Client_UpdateTrail();

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	ATrailNode();
};

FORCEINLINE uint32 GetTypeHash(const ATrailNode) { return 0; }
