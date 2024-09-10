#pragma once

#include "CoreMinimal.h"
#include "TutorialObjectivesViewInterface.h"
#include "CoreBaseHudWidget.h"
#include "Templates/SubclassOf.h"
#include "CoreTutorialObjectivesContainer.generated.h"

class UGridPanel;
class UCoreTutorialObjectiveItem;

UCLASS(EditInlineNew)
class DBDUIVIEWSCORE_API UCoreTutorialObjectivesContainer : public UCoreBaseHudWidget, public ITutorialObjectivesViewInterface
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, NoClear)
	TSubclassOf<UCoreTutorialObjectiveItem> CoreTutorialObjectiveItemClass;

	UPROPERTY(EditAnywhere, NoClear)
	int32 BasePooledInstanceAmount;

	UPROPERTY(BlueprintReadWrite, meta=(BindWidgetOptional))
	UGridPanel* ObjectiveContainer;

private:
	UPROPERTY(Transient, Export)
	TArray<UCoreTutorialObjectiveItem*> _objectivePool;

	UPROPERTY(Transient, Export)
	TMap<FName, UCoreTutorialObjectiveItem*> _objectiveItems;

private:
	UFUNCTION()
	void OnTutorialObjectiveCompleted(UCoreTutorialObjectiveItem* item);

public:
	UCoreTutorialObjectivesContainer();
};

FORCEINLINE uint32 GetTypeHash(const UCoreTutorialObjectivesContainer) { return 0; }
