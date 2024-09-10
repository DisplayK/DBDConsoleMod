#pragma once

#include "CoreMinimal.h"
#include "DBDTableRowBase.h"
#include "UObject/SoftObjectPtr.h"
#include "FakePalletData.generated.h"

class APalletTracker;
class APallet;
class UStaticMesh;

USTRUCT(BlueprintType)
struct FFakePalletData: public FDBDTableRowBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	TSoftClassPtr<APallet> LevelPalletBP;

	UPROPERTY(EditAnywhere)
	TSoftClassPtr<APallet> DreamPalletBP;

	UPROPERTY(EditAnywhere)
	TSoftClassPtr<APalletTracker> PalletTrackerBP;

	UPROPERTY(EditAnywhere)
	TSoftObjectPtr<UStaticMesh> IllusionaryPalletStaticMesh;

	UPROPERTY(BlueprintReadOnly)
	FName ID;

public:
	DEADBYDAYLIGHT_API FFakePalletData();
};

FORCEINLINE uint32 GetTypeHash(const FFakePalletData) { return 0; }
