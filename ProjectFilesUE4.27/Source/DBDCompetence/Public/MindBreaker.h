#pragma once

#include "CoreMinimal.h"
#include "Perk.h"
#include "MindBreaker.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class DBDCOMPETENCE_API UMindBreaker : public UPerk
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, EditFixedSize)
	float _effectDurationAfterRepair;

public:
	UMindBreaker();
};

FORCEINLINE uint32 GetTypeHash(const UMindBreaker) { return 0; }
