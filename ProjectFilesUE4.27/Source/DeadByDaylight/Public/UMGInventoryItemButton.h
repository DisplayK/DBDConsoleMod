#pragma once

#include "CoreMinimal.h"
#include "UMGLoadoutItemButton.h"
#include "UMGInventoryItemButton.generated.h"

class UProgressBar;
class ACollectable;

UCLASS(EditInlineNew)
class DEADBYDAYLIGHT_API UUMGInventoryItemButton : public UUMGLoadoutItemButton
{
	GENERATED_BODY()

private:
	UFUNCTION(BlueprintCallable)
	void UpdateItemButtonProgressBar(ACollectable* item, UProgressBar* itemProgressBar);

	UFUNCTION(BlueprintCallable)
	void UpdateItemButton(ACollectable* item);

public:
	UUMGInventoryItemButton();
};

FORCEINLINE uint32 GetTypeHash(const UUMGInventoryItemButton) { return 0; }
