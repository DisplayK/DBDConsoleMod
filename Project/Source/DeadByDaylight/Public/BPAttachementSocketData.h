#pragma once

#include "CoreMinimal.h"
#include "UObject/SoftObjectPtr.h"
#include "MaterialReplacerData.h"
#include "ConditionalMaterialReplacer.h"
#include "BPAttachementSocketData.generated.h"

class UAccessory;
class USkeletalMesh;

USTRUCT(BlueprintType)
struct FBPAttachementSocketData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	TSoftClassPtr<UAccessory> AccessoryBlueprint;

	UPROPERTY(EditAnywhere)
	TSoftObjectPtr<USkeletalMesh> SkeletalMesh;

	UPROPERTY(EditAnywhere)
	FName SocketName;

	UPROPERTY(EditAnywhere)
	TArray<FMaterialReplacerData> MaterialsMap;

	UPROPERTY(EditAnywhere)
	FConditionalMaterialReplacer ConditionalMaterialReplacer;

public:
	DEADBYDAYLIGHT_API FBPAttachementSocketData();
};

FORCEINLINE uint32 GetTypeHash(const FBPAttachementSocketData) { return 0; }
