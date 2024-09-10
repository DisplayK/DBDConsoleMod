#pragma once

#include "CoreMinimal.h"
#include "AIDisplayDebugInterface.h"
#include "UObject/NoExportTypes.h"
#include "PathStrategySelector.generated.h"

class ADBDAIBTController;
class UPathStrategy;

UCLASS(Abstract)
class DBDBOTS_API UPathStrategySelector : public UObject, public IAIDisplayDebugInterface
{
	GENERATED_BODY()

protected:
	UPROPERTY(Transient)
	ADBDAIBTController* _aiOwner;

	UPROPERTY(Transient)
	TArray<UPathStrategy*> _activePathStrategies;

	UPROPERTY(Transient)
	TArray<UPathStrategy*> _nextPathStrategies;

public:
	UPathStrategySelector();
};

FORCEINLINE uint32 GetTypeHash(const UPathStrategySelector) { return 0; }
