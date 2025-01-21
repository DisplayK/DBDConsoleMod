#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "ArchiveNodeObjectiveViewData.h"
#include "ChallengeTrackerViewData.h"
#include "ChallengeTrackerViewInterface.generated.h"

UINTERFACE(Blueprintable)
class DBDUIVIEWINTERFACES_API UChallengeTrackerViewInterface : public UInterface
{
	GENERATED_BODY()
};

class DBDUIVIEWINTERFACES_API IChallengeTrackerViewInterface : public IInterface
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void UpdateWidgetProgression(const FArchiveNodeObjectiveViewData& progressionData);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void OpenWidget();

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void InitWidgetData(const FChallengeTrackerViewData& viewData);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void CloseWidget();

};
