#pragma once

#include "CoreMinimal.h"
#include "Commandlets/Commandlet.h"
#include "LoadoutExportCommandlet.generated.h"

class UEnum;

UCLASS(NonTransient)
class ULoadoutExportCommandlet : public UCommandlet
{
	GENERATED_BODY()

private:
	UPROPERTY(Transient)
	UEnum* _enumPtr;

public:
	ULoadoutExportCommandlet();
};

FORCEINLINE uint32 GetTypeHash(const ULoadoutExportCommandlet) { return 0; }
