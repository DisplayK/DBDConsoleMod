#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EHudComponent.h"
#include "AtlantaTutorialPlayerHudController.generated.h"

UCLASS(BlueprintType)
class UAtlantaTutorialPlayerHudController : public UObject
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable)
	void ShowHudComponent(EHudComponent hudComponentToShow);

	UFUNCTION(BlueprintCallable)
	void SetVirtualJoystickInputEnabled(bool enable);

	UFUNCTION(BlueprintCallable)
	void HideHudComponent(EHudComponent hudComponentToHide);

public:
	UAtlantaTutorialPlayerHudController();
};

FORCEINLINE uint32 GetTypeHash(const UAtlantaTutorialPlayerHudController) { return 0; }
