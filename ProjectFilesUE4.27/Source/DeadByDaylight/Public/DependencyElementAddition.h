#pragma once

#include "CoreMinimal.h"
#include "ETileSpawnPointType.h"
#include "UObject/SoftObjectPtr.h"
#include "DependencyElementAddition.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FDependencyElementAddition
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadOnly, meta=(AllowPrivateAccess=true))
	TSoftClassPtr<AActor> _object;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, meta=(AllowPrivateAccess=true))
	ETileSpawnPointType _type;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, meta=(AllowPrivateAccess=true))
	int32 _numberToAdd;

public:
	DEADBYDAYLIGHT_API FDependencyElementAddition();
};

FORCEINLINE uint32 GetTypeHash(const FDependencyElementAddition) { return 0; }
