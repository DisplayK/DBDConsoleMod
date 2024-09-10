#pragma once

#include "CoreMinimal.h"
#include "EventDrivenModifierCondition.h"
#include "EComparisonOperation.h"
#include "IsOriginatingPerkBoundToTotems.generated.h"

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class DBDCOMPETENCE_API UIsOriginatingPerkBoundToTotems : public UEventDrivenModifierCondition
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly, Replicated)
	EComparisonOperation _comparisonOperator;

	UPROPERTY(EditDefaultsOnly, ReplicatedUsing=OnRep_TotemCount)
	int32 _totemCount;

private:
	UFUNCTION()
	void OnRep_TotemCount();

public:
	UFUNCTION(BlueprintCallable)
	void Init(EComparisonOperation comparisonOperator, int32 totemCount);

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UIsOriginatingPerkBoundToTotems();
};

FORCEINLINE uint32 GetTypeHash(const UIsOriginatingPerkBoundToTotems) { return 0; }
