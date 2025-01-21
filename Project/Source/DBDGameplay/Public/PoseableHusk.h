#pragma once

#include "CoreMinimal.h"
#include "BaseHusk.h"
#include "PoseableHusk.generated.h"

UCLASS()
class DBDGAMEPLAY_API APoseableHusk : public ABaseHusk
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable)
	void SetIsActive(bool isActive);

protected:
	UFUNCTION(BlueprintImplementableEvent)
	void OnActiveStateChanged(bool isActive);

public:
	UFUNCTION(BlueprintPure)
	bool GetIsActive() const;

protected:
	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnAnimationPoseCaptured();

public:
	UFUNCTION(BlueprintCallable)
	void CapturePose();

public:
	APoseableHusk();
};

FORCEINLINE uint32 GetTypeHash(const APoseableHusk) { return 0; }
