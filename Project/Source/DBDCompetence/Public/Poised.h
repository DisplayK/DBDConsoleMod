#pragma once

#include "CoreMinimal.h"
#include "Perk.h"
#include "Poised.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class DBDCOMPETENCE_API UPoised : public UPerk
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly, EditFixedSize)
	float _activationTime;

public:
	UPoised();
};

FORCEINLINE uint32 GetTypeHash(const UPoised) { return 0; }
