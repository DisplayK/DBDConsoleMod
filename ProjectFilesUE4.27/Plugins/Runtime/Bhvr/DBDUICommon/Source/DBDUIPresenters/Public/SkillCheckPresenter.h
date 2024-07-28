#pragma once

#include "CoreMinimal.h"
#include "HudPresenter.h"
#include "Templates/SubclassOf.h"
#include "SkillCheckDefinition.h"
#include "SkillCheckPresenter.generated.h"

class UUserWidget;

UCLASS(EditInlineNew)
class DBDUIPRESENTERS_API USkillCheckPresenter : public UHudPresenter
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TSubclassOf<UUserWidget> SkillCheckWidgetClass;

private:
	UFUNCTION()
	void OnUpdateSkillCheckVisual(bool isActive);

	UFUNCTION()
	void OnShowSkillCheckSuccess(bool isBonus);

	UFUNCTION()
	void OnShowSkillCheckFail();

	UFUNCTION()
	void OnShowSkillCheck(const FSkillCheckDefinition& currentSkillCheckDefinition);

public:
	USkillCheckPresenter();
};

FORCEINLINE uint32 GetTypeHash(const USkillCheckPresenter) { return 0; }
