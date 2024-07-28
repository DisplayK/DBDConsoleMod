#pragma once

#include "CoreMinimal.h"
#include "EContext.h"
#include "Presenter.h"
#include "Components/CanvasPanelSlot.h"
#include "Templates/SubclassOf.h"
#include "DisplayStandPresenter.generated.h"

class UUserWidget;

UCLASS(EditInlineNew)
class DBDUIPRESENTERS_API UDisplayStandPresenter : public UPresenter
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TSubclassOf<UUserWidget> CoreDisplayStandWidgetClass;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	EContext ObservedContext;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FName DisplayStandName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FAnchorData DragZoneLayoutData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float DragZonePositionX;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float DragZonePositionY;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float DragZoneSizeX;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float DragZoneSizeY;

public:
	UFUNCTION()
	void OnDisplayStandRotation(float distance);

private:
	UFUNCTION()
	bool IsContextEntered() const;

public:
	UDisplayStandPresenter();
};

FORCEINLINE uint32 GetTypeHash(const UDisplayStandPresenter) { return 0; }
