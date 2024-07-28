#pragma once

#include "CoreMinimal.h"
#include "UMGGridPageScrollWidget.h"
#include "CustomMatchTabConfig.h"
#include "UMGAtlantaMatchConfigPageScroll.generated.h"

UCLASS(Abstract, EditInlineNew)
class UUMGAtlantaMatchConfigPageScroll : public UUMGGridPageScrollWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditDefaultsOnly)
	FCustomMatchTabConfig CharactersTabConfig;

	UPROPERTY(EditDefaultsOnly)
	FCustomMatchTabConfig InventoryTabConfig;

	UPROPERTY(EditDefaultsOnly)
	FCustomMatchTabConfig MapTabConfig;

public:
	UUMGAtlantaMatchConfigPageScroll();
};

FORCEINLINE uint32 GetTypeHash(const UUMGAtlantaMatchConfigPageScroll) { return 0; }
