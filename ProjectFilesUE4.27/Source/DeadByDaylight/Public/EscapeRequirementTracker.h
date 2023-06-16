#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "UObject/Object.h"
#include "GameEventData.h"
#include "EscapeRequirementTracker.generated.h"

class AGenerator;
class ADBDGameState;

UCLASS()
class UEscapeRequirementTracker : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(Transient, BlueprintReadWrite, EditAnywhere)
    TArray<AGenerator*> _escapeGenerators;
    
private:
    UPROPERTY(Transient)
    ADBDGameState* _dbdGameState;
    
public:
    UEscapeRequirementTracker();
private:
    UFUNCTION()
    void OnGameEventDispatched(FGameplayTag gameEventType, const FGameEventData& gameEventData);
    
};

