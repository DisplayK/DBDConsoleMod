#pragma once
#include "CoreMinimal.h"
#include "DBDBaseGameMode.h"
#include "DBDBaseMatchGameMode.generated.h"

class UEndGameComponent;
class UEscapeRequirementTracker;
class ANetworkFenceActor;

UCLASS(NonTransient)
class DEADBYDAYLIGHT_API ADBDBaseMatchGameMode : public ADBDBaseGameMode {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly, Export, BlueprintReadWrite)
    UEndGameComponent* _endGameComponent;
    
    UPROPERTY(Transient, BlueprintReadWrite, EditAnywhere)
    UEscapeRequirementTracker* _escapeRequirementTracker;

private:
    UPROPERTY(Transient)
    ANetworkFenceActor* _theFence;
    
public:
    ADBDBaseMatchGameMode();
    UFUNCTION(BlueprintPure, BlueprintCallable)
    UEndGameComponent* GetEndGameComponent() const;
    
};

