#pragma once

#include "CoreMinimal.h"
#include "CustomWidgetWrapper.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTagContainer.h"
#include "HudEditorDragFromParentAxisLimit.h"
#include "CustomWidgetWrapper_HudEditor.generated.h"

class UWidget;
class UCustomWidgetWrapper_HudEditor;

UCLASS()
class DEADBYDAYLIGHT_API UCustomWidgetWrapper_HudEditor : public UCustomWidgetWrapper
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	float MinOpacity;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	float MaxOpacity;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	float MinScale;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	float MaxScale;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	int32 NbVersions;

	UPROPERTY(EditAnywhere)
	float HideUnderOpacity;

	UPROPERTY(EditAnywhere)
	FColor HiddenStatusTintColor;

	UPROPERTY(EditAnywhere)
	float HiddenStatusOpacity;

	UPROPERTY(EditAnywhere)
	float OverlapAboveSizeRatio;

	UPROPERTY(EditAnywhere)
	FGameplayTagContainer IgnoreOverlapIds;

	UPROPERTY(EditAnywhere)
	FHudEditorDragFromParentAxisLimit ParentDragLimitX;

	UPROPERTY(EditAnywhere)
	FHudEditorDragFromParentAxisLimit ParentDragLimitY;

	UPROPERTY(VisibleInstanceOnly, BlueprintReadWrite)
	bool IsEditingHudByInput;

	UPROPERTY(EditAnywhere)
	FColor OverlapStatusTintColor;

public:
	UFUNCTION(BlueprintPure)
	float GetScale() const;

	UFUNCTION(BlueprintPure)
	float GetOpacity() const;

	UFUNCTION(BlueprintCallable)
	void FlipScreenPosition();

	UFUNCTION(BlueprintCallable)
	void FlipPositionWithChildLinkWidget();

	UFUNCTION(BlueprintCallable)
	void ClampToViewport();

	UFUNCTION(BlueprintPure)
	bool CanEditScale() const;

	UFUNCTION(BlueprintPure)
	bool CanEditOpacity() const;

	UFUNCTION(BlueprintCallable)
	void ApplyScaleWithOverlappingWrappers(float scale, UWidget* widget, const TArray<UCustomWidgetWrapper_HudEditor*>& allEditableWrappers, bool needDetectOverlapping);

	UFUNCTION(BlueprintCallable)
	void AddToTranslation(FVector2D translation);

public:
	UCustomWidgetWrapper_HudEditor();
};

FORCEINLINE uint32 GetTypeHash(const UCustomWidgetWrapper_HudEditor) { return 0; }
