#pragma once

#include "CoreMinimal.h"
#include "Perk.h"
#include "MakeYourChoice.generated.h"

class AActor;

UCLASS(meta=(BlueprintSpawnableComponent))
class UMakeYourChoice : public UPerk
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MinimumHookedSurvivorDistance;

public:
	UFUNCTION(BlueprintPure)
	bool CanApplyExposedEffect(const AActor* unhooker) const;

public:
	UMakeYourChoice();
};

FORCEINLINE uint32 GetTypeHash(const UMakeYourChoice) { return 0; }
