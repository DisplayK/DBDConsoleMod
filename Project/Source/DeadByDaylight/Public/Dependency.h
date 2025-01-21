#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Templates/SubclassOf.h"
#include "ETileSpawnPointType.h"
#include "Dependency.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FDependency
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere)
	ETileSpawnPointType Type;

	UPROPERTY(EditAnywhere)
	FSoftObjectPath AssetReference;

	UPROPERTY(EditAnywhere)
	TSubclassOf<AActor> Object;

	UPROPERTY(EditAnywhere)
	bool Unique;

	UPROPERTY(EditAnywhere)
	int32 Count;

public:
	DEADBYDAYLIGHT_API FDependency();
};

FORCEINLINE uint32 GetTypeHash(const FDependency) { return 0; }
