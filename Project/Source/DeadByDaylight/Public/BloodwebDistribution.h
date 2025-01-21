#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "BloodwebDistribution.generated.h"

class UBloodwebTunables;
class UDBDDesignTunables;

UCLASS()
class DEADBYDAYLIGHT_API UBloodwebDistribution : public UObject
{
	GENERATED_BODY()

private:
	UPROPERTY(Transient)
	UDBDDesignTunables* _designTunables;

	UPROPERTY(Transient)
	UBloodwebTunables* _bloodwebTunables;

public:
	UBloodwebDistribution();
};

FORCEINLINE uint32 GetTypeHash(const UBloodwebDistribution) { return 0; }
