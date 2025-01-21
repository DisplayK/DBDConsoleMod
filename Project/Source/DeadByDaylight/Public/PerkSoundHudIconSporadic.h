#pragma once

#include "CoreMinimal.h"
#include "Layout/Geometry.h"
#include "PerkSoundHudIcon.h"
#include "PerkSoundHudIconSporadic.generated.h"

class UCanvasPanel;

UCLASS(Abstract, EditInlineNew)
class UPerkSoundHudIconSporadic : public UPerkSoundHudIcon
{
	GENERATED_BODY()

protected:
	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UCanvasPanel* SporadicIcon;

	UPROPERTY(EditDefaultsOnly)
	float FadeInRate;

	UPROPERTY(EditDefaultsOnly)
	float FadeOutRate;

	UPROPERTY(EditDefaultsOnly)
	float AnimationStartOpacity;

	UPROPERTY(EditDefaultsOnly)
	int32 FadePolynomialOrder;

	UPROPERTY(BlueprintReadOnly)
	bool DisplayIcon;

public:
	UFUNCTION()
	void NativeTick(const FGeometry& MyGeometry, float DeltaTime);

public:
	UPerkSoundHudIconSporadic();
};

FORCEINLINE uint32 GetTypeHash(const UPerkSoundHudIconSporadic) { return 0; }
