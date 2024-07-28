#pragma once

#include "CoreMinimal.h"
#include "Perk.h"
#include "SpiesFromTheShadows.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class DBDCOMPETENCE_API USpiesFromTheShadows : public UPerk
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditDefaultsOnly)
	float _cooldownDurationSecs;

public:
	USpiesFromTheShadows();
};

FORCEINLINE uint32 GetTypeHash(const USpiesFromTheShadows) { return 0; }
