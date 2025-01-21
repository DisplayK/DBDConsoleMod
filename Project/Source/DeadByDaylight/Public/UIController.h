#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UIController.generated.h"

class UMobileBaseUserWidget;
class UGFxObject;

UCLASS()
class DEADBYDAYLIGHT_API UUIController : public UObject
{
	GENERATED_BODY()

private:
	UPROPERTY(Transient)
	UGFxObject* m_UIControllerObj;

	UPROPERTY(Transient, Export)
	UMobileBaseUserWidget* _atlantaLoadingWidget;

public:
	UUIController();
};

FORCEINLINE uint32 GetTypeHash(const UUIController) { return 0; }
