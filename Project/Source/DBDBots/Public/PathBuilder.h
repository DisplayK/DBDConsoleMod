#pragma once

#include "CoreMinimal.h"
#include "AIDisplayDebugInterface.h"
#include "UObject/NoExportTypes.h"
#include "EAITerrorLevel.h"
#include "PathBuilder.generated.h"

class UNavMovePath;
class ADBDAIBTController;

UCLASS(Abstract, EditInlineNew)
class DBDBOTS_API UPathBuilder : public UObject, public IAIDisplayDebugInterface
{
	GENERATED_BODY()

public:
	UPROPERTY(EditDefaultsOnly)
	float PathReachedPointRadius;

	UPROPERTY(EditDefaultsOnly)
	EAITerrorLevel ToleratedTerrorPressure;

	UPROPERTY(EditDefaultsOnly)
	bool OverridePreviousPathStrategy;

protected:
	UPROPERTY(Transient)
	UNavMovePath* _path;

	UPROPERTY(Transient)
	ADBDAIBTController* _aiOwner;

public:
	UPathBuilder();
};

FORCEINLINE uint32 GetTypeHash(const UPathBuilder) { return 0; }
