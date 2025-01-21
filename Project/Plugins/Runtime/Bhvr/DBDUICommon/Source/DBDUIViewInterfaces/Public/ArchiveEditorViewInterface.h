#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "ArchiveEditorViewInterface.generated.h"

UINTERFACE(Blueprintable)
class DBDUIVIEWINTERFACES_API UArchiveEditorViewInterface : public UInterface
{
	GENERATED_BODY()
};

class DBDUIVIEWINTERFACES_API IArchiveEditorViewInterface : public IInterface
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void InitEditor();

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void DisplayEditorSaving(const FString& path);

};
