#pragma once

#include "CoreMinimal.h"
#include "ExternalEffectData.h"
#include "EExternalEffectSource.h"
#include "HudPresenter.h"
#include "Templates/SubclassOf.h"
#include "ExternalEffectsPresenter.generated.h"

class UUserWidget;

UCLASS(EditInlineNew)
class UExternalEffectsPresenter : public UHudPresenter
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TSubclassOf<UUserWidget> CoreExternalEffectsWidgetClass;

protected:
	UFUNCTION()
	void OnShowExternalEffect(const FExternalEffectData& data);

	UFUNCTION()
	void OnHideExternalEffect(const FName itemId, const EExternalEffectSource externalEffectSource);

public:
	UExternalEffectsPresenter();
};

FORCEINLINE uint32 GetTypeHash(const UExternalEffectsPresenter) { return 0; }
