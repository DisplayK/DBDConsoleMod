#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "CustomWidgetWrapperInitializer.generated.h"

class UCustomWidgetWrapper;

UCLASS(EditInlineNew)
class DEADBYDAYLIGHT_API UCustomWidgetWrapperInitializer : public UUserWidget
{
	GENERATED_BODY()

private:
	UPROPERTY(Transient, Export)
	UCustomWidgetWrapper* ListeningWrapper;

public:
	UCustomWidgetWrapperInitializer();
};

FORCEINLINE uint32 GetTypeHash(const UCustomWidgetWrapperInitializer) { return 0; }
