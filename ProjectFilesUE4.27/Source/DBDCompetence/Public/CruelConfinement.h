#pragma once

#include "CoreMinimal.h"
#include "Perk.h"
#include "WindowBlockableList.h"
#include "UObject/NoExportTypes.h"
#include "CruelConfinement.generated.h"

class AGenerator;

UCLASS(meta=(BlueprintSpawnableComponent))
class DBDCOMPETENCE_API UCruelConfinement : public UPerk
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, EditFixedSize)
	float _effectiveRadius;

	UPROPERTY(EditAnywhere, EditFixedSize)
	float _blockDuration;

	UPROPERTY(EditAnywhere)
	FLinearColor _windowAuraColor;

	UPROPERTY(Transient)
	TMap<AGenerator*, FWindowBlockableList> _blockableLists;

public:
	UFUNCTION(BlueprintCallable)
	float GetEffectiveRadiusAtLevel();

	UFUNCTION(BlueprintCallable)
	float GetBlockDurationAtLevel();

public:
	UCruelConfinement();
};

FORCEINLINE uint32 GetTypeHash(const UCruelConfinement) { return 0; }
