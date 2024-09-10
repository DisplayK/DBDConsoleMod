#pragma once

#include "CoreMinimal.h"
#include "AIPathValidatorInterface.h"
#include "AIDisplayDebugInterface.h"
#include "UObject/NoExportTypes.h"
#include "PathStrategy.generated.h"

class ADBDAIBTController;
class UPathBuilder;

UCLASS(EditInlineNew)
class DBDBOTS_API UPathStrategy : public UObject, public IAIDisplayDebugInterface, public IAIPathValidatorInterface
{
	GENERATED_BODY()

public:
	UPROPERTY(EditDefaultsOnly, Export)
	TArray<UPathBuilder*> DefaultPathBuilders;

	UPROPERTY(EditDefaultsOnly)
	float RefreshPartialPathDelay;

	UPROPERTY(EditDefaultsOnly)
	float StartNextBranchBuildDelay;

protected:
	UPROPERTY(Transient)
	ADBDAIBTController* _aiOwner;

	UPROPERTY(Transient)
	TArray<UPathBuilder*> _pathBuilders;

public:
	UPathStrategy();
};

FORCEINLINE uint32 GetTypeHash(const UPathStrategy) { return 0; }
