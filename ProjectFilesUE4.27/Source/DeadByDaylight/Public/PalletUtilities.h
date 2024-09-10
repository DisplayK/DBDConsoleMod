#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/SoftObjectPtr.h"
#include "PalletUtilities.generated.h"

class APallet;
class APalletTracker;
class UStaticMesh;

UCLASS(BlueprintType)
class DEADBYDAYLIGHT_API UPalletUtilities : public UObject
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable)
	static TSoftClassPtr<APalletTracker> GetPalletTrackerBP(const UObject* worldContextObject);

	UFUNCTION(BlueprintCallable)
	static TSoftObjectPtr<UStaticMesh> GetIllusionaryPalletStaticMesh(const UObject* worldContextObjec);

	UFUNCTION(BlueprintCallable)
	static TSoftClassPtr<APallet> GetDreamPalletBP(const UObject* worldContextObject);

public:
	UPalletUtilities();
};

FORCEINLINE uint32 GetTypeHash(const UPalletUtilities) { return 0; }
