#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "ESubtitlesSize.h"
#include "ESubtitlesPosition.h"
#include "ESubtitlesBackgroundOpacity.h"
#include "SubtitlesViewInterface.generated.h"

UINTERFACE(Blueprintable)
class DBDUIVIEWINTERFACES_API USubtitlesViewInterface : public UInterface
{
	GENERATED_BODY()
};

class DBDUIVIEWINTERFACES_API ISubtitlesViewInterface : public IInterface
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void ShowSubtitle(const FText& subtitleText);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void SetSubtitlesSize(ESubtitlesSize size);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void SetSubtitlesPosition(ESubtitlesPosition position);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void SetSubtitlesBackgroundOpacity(ESubtitlesBackgroundOpacity opacity);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void SetConstrainAspectRatioChanged(bool isConstrained, float aspectRatio);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void HideSubtitles();

};
