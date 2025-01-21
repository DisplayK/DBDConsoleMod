#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ProgressionPoints.h"
#include "Engine/DataTable.h"
#include "DBDEmblem.generated.h"

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UDBDEmblem : public UActorComponent
{
	GENERATED_BODY()

protected:
	UPROPERTY(Replicated, Transient)
	float _points;

	UPROPERTY(Replicated, Transient)
	TArray<FProgressionPoints> _progressionPoints;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FDataTableRowHandle _definition;

private:
	UFUNCTION(Client, Reliable)
	void Client_FinalizeReplication(const float points, const TArray<FProgressionPoints>& progressionPoints);

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UDBDEmblem();
};

FORCEINLINE uint32 GetTypeHash(const UDBDEmblem) { return 0; }
