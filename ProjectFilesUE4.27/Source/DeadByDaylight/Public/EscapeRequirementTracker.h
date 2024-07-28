#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTagContainer.h"
#include "GameEventData.h"
#include "EscapeRequirementTracker.generated.h"

class AGenerator;
class ADBDGameState;

UCLASS()
class UEscapeRequirementTracker : public UObject
{
	GENERATED_BODY()

public:
	UPROPERTY(Transient, BlueprintReadWrite, EditAnywhere)
	TArray<AGenerator*> _escapeGenerators;

	UPROPERTY(Transient, BlueprintReadWrite, EditAnywhere)
	ADBDGameState* _dbdGameState;

public:
	UFUNCTION(BlueprintCallable)
	void OnGameEventDispatched(FGameplayTag gameEventType, const FGameEventData& gameEventData);

public:
	UEscapeRequirementTracker();
};

FORCEINLINE uint32 GetTypeHash(const UEscapeRequirementTracker) { return 0; }
