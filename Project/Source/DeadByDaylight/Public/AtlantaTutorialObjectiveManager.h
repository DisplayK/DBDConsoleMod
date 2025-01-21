#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AtlantaTutorialObjectiveManager.generated.h"

class UAtlantaObjectiveWidget;
class UVerticalBox;

UCLASS()
class DEADBYDAYLIGHT_API UAtlantaTutorialObjectiveManager : public UObject
{
	GENERATED_BODY()

private:
	UPROPERTY(Transient, Export)
	TArray<UAtlantaObjectiveWidget*> _objectivesList;

	UPROPERTY(Export)
	UVerticalBox* _objectivesContainer;

public:
	UAtlantaTutorialObjectiveManager();
};

FORCEINLINE uint32 GetTypeHash(const UAtlantaTutorialObjectiveManager) { return 0; }
