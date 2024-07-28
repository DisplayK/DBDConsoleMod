#pragma once

#include "CoreMinimal.h"
#include "DBDTableRowBase.h"
#include "SurfaceTypeName.generated.h"

USTRUCT(BlueprintType)
struct FSurfaceTypeName: public FDBDTableRowBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName Name;

public:
	DEADBYDAYLIGHT_API FSurfaceTypeName();
};

FORCEINLINE uint32 GetTypeHash(const FSurfaceTypeName) { return 0; }
