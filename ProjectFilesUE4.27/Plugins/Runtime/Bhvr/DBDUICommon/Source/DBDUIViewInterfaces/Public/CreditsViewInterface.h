#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "CreditsViewInterface.generated.h"

UINTERFACE(Blueprintable)
class DBDUIVIEWINTERFACES_API UCreditsViewInterface : public UInterface
{
	GENERATED_BODY()
};

class DBDUIVIEWINTERFACES_API ICreditsViewInterface : public IInterface
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void SetText(const FText& text);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void ScrollToName(const FString& name, float delay);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void ScrollToEnd();

};
