#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "HoudiniInstancedOutput.h"
#include "HoudiniOutputObject.h"
#include "EHoudiniOutputType.h"
#include "HoudiniOutputObjectIdentifier.h"
#include "HoudiniGeoPartObject.h"
#include "HoudiniOutput.generated.h"

class AActor;
class UMaterialInterface;

UCLASS()
class HOUDINIENGINERUNTIME_API UHoudiniOutput : public UObject
{
	GENERATED_BODY()

protected:
	UPROPERTY()
	EHoudiniOutputType Type;

	UPROPERTY()
	TArray<FHoudiniGeoPartObject> HoudiniGeoPartObjects;

	UPROPERTY(DuplicateTransient)
	TMap<FHoudiniOutputObjectIdentifier, FHoudiniOutputObject> OutputObjects;

	UPROPERTY()
	TMap<FHoudiniOutputObjectIdentifier, FHoudiniInstancedOutput> InstancedOutputs;

	UPROPERTY()
	TMap<FString, UMaterialInterface*> AssignementMaterials;

	UPROPERTY()
	TMap<FString, UMaterialInterface*> ReplacementMaterials;

	UPROPERTY()
	bool bLandscapeWorldComposition;

	UPROPERTY()
	TArray<AActor*> HoudiniCreatedSocketActors;

	UPROPERTY()
	TArray<AActor*> HoudiniAttachedSocketActors;

private:
	UPROPERTY()
	bool bIsEditableNode;

	UPROPERTY(Transient, DuplicateTransient)
	bool bHasEditableNodeBuilt;

	UPROPERTY()
	bool bIsUpdating;

	UPROPERTY()
	bool bCanDeleteHoudiniNodes;

public:
	UHoudiniOutput();
};

FORCEINLINE uint32 GetTypeHash(const UHoudiniOutput) { return 0; }
