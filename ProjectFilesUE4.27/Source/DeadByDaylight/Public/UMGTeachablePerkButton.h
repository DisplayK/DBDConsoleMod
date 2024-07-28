#pragma once

#include "CoreMinimal.h"
#include "TeachableData.h"
#include "MobileBaseUserWidget.h"
#include "OnTeachableTooltipLongPressEvent.h"
#include "InventorySlotData.h"
#include "UObject/NoExportTypes.h"
#include "UMGTeachablePerkButton.generated.h"

class UPerkActionButton;
class UImage;

UCLASS(Abstract, EditInlineNew)
class UUMGTeachablePerkButton : public UMobileBaseUserWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadOnly, Export)
	UPerkActionButton* TeachablePerkButton;

	UPROPERTY(BlueprintReadOnly, Export)
	UImage* LockedStatusIcon;

protected:
	UPROPERTY(BlueprintReadWrite, Transient)
	FTeachableData _teachableData;

private:
	UPROPERTY()
	FOnTeachableTooltipLongPressEvent _onTeachablePerkTooltipLongPressEvent;

private:
	UFUNCTION()
	void HandleTooltipLongPressedEvent(const FInventorySlotData& itemData, FVector2D position);

public:
	UUMGTeachablePerkButton();
};

FORCEINLINE uint32 GetTypeHash(const UUMGTeachablePerkButton) { return 0; }
