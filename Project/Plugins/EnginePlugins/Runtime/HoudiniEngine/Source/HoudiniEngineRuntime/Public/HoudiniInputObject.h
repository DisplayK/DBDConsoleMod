#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/SoftObjectPtr.h"
#include "EHoudiniInputObjectType.h"
#include "HoudiniInputObject.generated.h"

UCLASS()
class HOUDINIENGINERUNTIME_API UHoudiniInputObject : public UObject
{
	GENERATED_BODY()

public:
	UPROPERTY()
	TSoftObjectPtr<UObject> InputObject;

	UPROPERTY()
	FTransform Transform;

	UPROPERTY()
	EHoudiniInputObjectType Type;

	UPROPERTY(NonTransactional, Transient, DuplicateTransient)
	int32 InputNodeId;

	UPROPERTY(NonTransactional, Transient, DuplicateTransient)
	int32 InputObjectNodeId;

	UPROPERTY(DuplicateTransient)
	FGuid Guid;

protected:
	UPROPERTY(DuplicateTransient)
	bool bHasChanged;

	UPROPERTY(DuplicateTransient)
	bool bNeedsToTriggerUpdate;

	UPROPERTY(DuplicateTransient)
	bool bTransformChanged;

	UPROPERTY()
	bool bImportAsReference;

	UPROPERTY()
	bool bCanDeleteHoudiniNodes;

public:
	UHoudiniInputObject();
};

FORCEINLINE uint32 GetTypeHash(const UHoudiniInputObject) { return 0; }
