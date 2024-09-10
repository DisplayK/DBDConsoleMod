#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "CompendiumButtonData.h"
#include "ArchiveCompendiumViewInterface.generated.h"

UINTERFACE(Blueprintable)
class DBDUIVIEWINTERFACES_API UArchiveCompendiumViewInterface : public UInterface
{
	GENERATED_BODY()
};

class DBDUIVIEWINTERFACES_API IArchiveCompendiumViewInterface : public IInterface
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void SetPastTomesViewData(const TArray<FCompendiumButtonData>& pastStoryButtonData);

};
