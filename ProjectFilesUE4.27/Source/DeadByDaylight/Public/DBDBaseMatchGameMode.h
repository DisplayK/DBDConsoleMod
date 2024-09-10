#pragma once

#include "CoreMinimal.h"
#include "DBDBaseGameMode.h"
#include "DBDBaseMatchGameMode.generated.h"

class UEscapeRequirementTracker;
class UEndGameComponent;
class ANetworkFenceActor;

UCLASS(NonTransient)
class DEADBYDAYLIGHT_API ADBDBaseMatchGameMode : public ADBDBaseGameMode
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Export)
	UEndGameComponent* _endGameComponent;

	UPROPERTY(Transient, BlueprintReadWrite, EditAnywhere)
	UEscapeRequirementTracker* _escapeRequirementTracker;

	UPROPERTY(Transient, BlueprintReadWrite, EditAnywhere)
	ANetworkFenceActor* _theFence;

public:
	UFUNCTION(BlueprintPure)
	UEndGameComponent* GetEndGameComponent() const;

public:
	ADBDBaseMatchGameMode();
};

FORCEINLINE uint32 GetTypeHash(const ADBDBaseMatchGameMode) { return 0; }
