#pragma once

#include "CoreMinimal.h"
#include "GameplayModifierCondition.h"
#include "PlayerIsInExitArea.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class UPlayerIsInExitArea : public UGameplayModifierCondition
{
	GENERATED_BODY()

private:
	UFUNCTION()
	void PlayerExitExitArea();

	UFUNCTION()
	void PlayerEnterExitArea();

public:
	UPlayerIsInExitArea();
};

FORCEINLINE uint32 GetTypeHash(const UPlayerIsInExitArea) { return 0; }
