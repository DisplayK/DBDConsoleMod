#pragma once

#include "CoreMinimal.h"
#include "Perk.h"
#include "Templates/SubclassOf.h"
#include "S34P02.generated.h"

class UStatusEffect;

UCLASS(meta=(BlueprintSpawnableComponent))
class THEK30_API US34P02 : public UPerk
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UStatusEffect> _revealKillerStatusClass;

public:
	US34P02();
};

FORCEINLINE uint32 GetTypeHash(const US34P02) { return 0; }
