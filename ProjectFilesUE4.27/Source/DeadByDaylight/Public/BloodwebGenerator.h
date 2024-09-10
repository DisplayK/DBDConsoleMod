#pragma once

#include "CoreMinimal.h"
#include "UObject/ScriptInterface.h"
#include "UObject/NoExportTypes.h"
#include "BloodwebGenerator.generated.h"

class UBloodwebTunables;
class UBloodwebDistribution;
class IDBDBloodwebDefinitionBase;
class UDBDDesignTunables;
class UBloodwebSettings;

UCLASS()
class DEADBYDAYLIGHT_API UBloodwebGenerator : public UObject
{
	GENERATED_BODY()

private:
	UPROPERTY()
	FRandomStream _randomizationStream;

	UPROPERTY()
	TArray<FString> _selectedNodes;

	UPROPERTY()
	TArray<FName> _selectedContent;

	UPROPERTY(Transient)
	TScriptInterface<IDBDBloodwebDefinitionBase> _bloodWebDefinition;

	UPROPERTY(Transient)
	UDBDDesignTunables* _designTunables;

	UPROPERTY(Transient)
	UBloodwebTunables* _bloodwebTunables;

	UPROPERTY()
	float _alternativePathOccurenceFactor;

	UPROPERTY(Transient)
	UBloodwebDistribution* _dataDistribution;

	UPROPERTY(EditAnywhere)
	UBloodwebSettings* _bloodwebSettings;

public:
	UBloodwebGenerator();
};

FORCEINLINE uint32 GetTypeHash(const UBloodwebGenerator) { return 0; }
