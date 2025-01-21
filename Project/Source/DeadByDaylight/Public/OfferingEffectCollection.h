#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "EOfferingEffectType.h"
#include "OfferingEffectCollection.generated.h"

UCLASS(BlueprintType)
class DEADBYDAYLIGHT_API UOfferingEffectCollection : public UGameInstanceSubsystem
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintPure)
	bool HasOfferingWithTag(int32 playerId, FName tag) const;

	UFUNCTION(BlueprintPure)
	bool HasOfferingOfType(EOfferingEffectType type, int32 playerId, FName tag) const;

public:
	UOfferingEffectCollection();
};

FORCEINLINE uint32 GetTypeHash(const UOfferingEffectCollection) { return 0; }
