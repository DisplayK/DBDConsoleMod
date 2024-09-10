#pragma once

#include "CoreMinimal.h"
#include "DBDTableRowBase.h"
#include "MaterialMapForClip.generated.h"

class UMaterialInterface;

USTRUCT(BlueprintType)
struct FMaterialMapForClip: public FDBDTableRowBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	UMaterialInterface* SrcMaterial;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	UMaterialInterface* DstMaterial;

public:
	DEADBYDAYLIGHT_API FMaterialMapForClip();
};

FORCEINLINE uint32 GetTypeHash(const FMaterialMapForClip) { return 0; }
