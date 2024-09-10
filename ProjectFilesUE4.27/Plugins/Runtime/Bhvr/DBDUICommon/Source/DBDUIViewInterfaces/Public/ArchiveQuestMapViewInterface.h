#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "ArchiveNodeGraphViewData.h"
#include "ArchiveMapPathViewData.h"
#include "ArchiveQuestMapViewInterface.generated.h"

UINTERFACE(Blueprintable)
class DBDUIVIEWINTERFACES_API UArchiveQuestMapViewInterface : public UInterface
{
	GENERATED_BODY()
};

class DBDUIVIEWINTERFACES_API IArchiveQuestMapViewInterface : public IInterface
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void UpdateQuestMapData(const TArray<FArchiveNodeGraphViewData>& nodeDataList, const TArray<FArchiveMapPathViewData>& pathDataList);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void SetQuestMapData(const TArray<FArchiveNodeGraphViewData>& nodeDataList, const TArray<FArchiveMapPathViewData>& pathDataList, bool needsCascadeAppear);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void SetLoadingSpinner(bool isLoading);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void Reset();

};
