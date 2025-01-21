#pragma once

#include "CoreMinimal.h"
#include "Perk.h"
#include "GameplayTagContainer.h"
#include "CorrectiveAction.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class UCorrectiveAction : public UPerk
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	float _startingTokens;

	UPROPERTY(EditDefaultsOnly)
	FName _statusEffectName;

	UPROPERTY(EditDefaultsOnly)
	FGameplayTagContainer _allowedInteractionSemanticsForToken;

public:
	UCorrectiveAction();
};

FORCEINLINE uint32 GetTypeHash(const UCorrectiveAction) { return 0; }
