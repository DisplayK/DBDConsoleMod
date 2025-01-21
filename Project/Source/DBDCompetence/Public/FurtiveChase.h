#pragma once

#include "CoreMinimal.h"
#include "Perk.h"
#include "FurtiveChase.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class DBDCOMPETENCE_API UFurtiveChase : public UPerk
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly, EditFixedSize)
	int32 _maxTokensByLevel;

	UPROPERTY(EditAnywhere)
	float _terrorRadiusSuppressionPerToken;

public:
	UFurtiveChase();
};

FORCEINLINE uint32 GetTypeHash(const UFurtiveChase) { return 0; }
