#pragma once

#include "CoreMinimal.h"
#include "Perk.h"
#include "ECamperImmobilizeState.h"
#include "InnerStrength.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class DBDCOMPETENCE_API UInnerStrength : public UPerk
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditDefaultsOnly, EditFixedSize)
	float _hideDuration;

private:
	UFUNCTION()
	void Authority_OnPlayerImmobilizeStateChanged(const ECamperImmobilizeState oldImmobilizeState, const ECamperImmobilizeState newImmobilizeState);

public:
	UInnerStrength();
};

FORCEINLINE uint32 GetTypeHash(const UInnerStrength) { return 0; }
