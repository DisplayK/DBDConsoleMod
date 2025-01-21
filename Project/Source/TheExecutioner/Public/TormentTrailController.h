#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "TrailControllerBase.h"
#include "ReplicatedTrailPointList.h"
#include "Engine/NetSerialization.h"
#include "TormentTrailController.generated.h"

class AMobileTormentTrailRenderer;
class ATormentTrailPoint;

UCLASS()
class ATormentTrailController : public ATrailControllerBase
{
	GENERATED_BODY()

private:
	UPROPERTY(Replicated)
	FReplicatedTrailPointList _trailPointList;

	UPROPERTY(Transient)
	AMobileTormentTrailRenderer* _mobileTormentTrailRenderer;

private:
	UFUNCTION(Server, Reliable, WithValidation)
	void Server_SpawnTormentTrailPoint(ATormentTrailPoint* trailPoint, const FVector_NetQuantize10 location, const FRotator rotation);

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	ATormentTrailController();
};

FORCEINLINE uint32 GetTypeHash(const ATormentTrailController) { return 0; }
