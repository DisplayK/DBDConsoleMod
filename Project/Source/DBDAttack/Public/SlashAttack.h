#pragma once

#include "CoreMinimal.h"
#include "PounceAttack.h"
#include "SlashAttack.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class DBDATTACK_API USlashAttack : public UPounceAttack
{
	GENERATED_BODY()

public:
	USlashAttack();
};

FORCEINLINE uint32 GetTypeHash(const USlashAttack) { return 0; }
