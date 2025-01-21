#pragma once

#include "CoreMinimal.h"
#include "BaseHusk.h"
#include "UObject/NoExportTypes.h"
#include "IllusionaryDoctor.generated.h"

class UDBDOutlineComponent;

UCLASS()
class AIllusionaryDoctor : public ABaseHusk
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, meta=(BindWidgetOptional))
	UDBDOutlineComponent* _dbdOutline;

private:
	UPROPERTY(EditDefaultsOnly)
	FLinearColor _revealedAuraColor;

	UPROPERTY(EditDefaultsOnly)
	FLinearColor _unrevealedAuraColor;

public:
	UFUNCTION(BlueprintCallable)
	void DeactivateIllusion();

	UFUNCTION(BlueprintCallable)
	void ActivateIllusion(const FTransform& transform);

public:
	AIllusionaryDoctor();
};

FORCEINLINE uint32 GetTypeHash(const AIllusionaryDoctor) { return 0; }
