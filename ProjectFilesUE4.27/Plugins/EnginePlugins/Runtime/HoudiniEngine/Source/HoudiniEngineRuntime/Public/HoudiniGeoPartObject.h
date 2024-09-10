#pragma once

#include "CoreMinimal.h"
#include "EHoudiniPartType.h"
#include "UObject/NoExportTypes.h"
#include "HoudiniMeshSocket.h"
#include "EHoudiniInstancerType.h"
#include "HoudiniGeoPartObject.generated.h"

USTRUCT()
struct FHoudiniGeoPartObject
{
	GENERATED_BODY()

public:
	UPROPERTY()
	int32 AssetId;

	UPROPERTY()
	FString AssetName;

	UPROPERTY()
	int32 ObjectId;

	UPROPERTY()
	FString ObjectName;

	UPROPERTY()
	int32 GeoId;

	UPROPERTY()
	int32 PartId;

	UPROPERTY()
	FString PartName;

	UPROPERTY()
	bool bHasCustomPartName;

	UPROPERTY()
	TArray<FString> SplitGroups;

	UPROPERTY()
	FTransform TransformMatrix;

	UPROPERTY()
	FString NodePath;

	UPROPERTY()
	EHoudiniPartType Type;

	UPROPERTY()
	EHoudiniInstancerType InstancerType;

	UPROPERTY()
	FString VolumeName;

	UPROPERTY()
	int32 VolumeTileIndex;

	UPROPERTY()
	bool bIsVisible;

	UPROPERTY()
	bool bIsEditable;

	UPROPERTY()
	bool bIsTemplated;

	UPROPERTY()
	bool bIsInstanced;

	UPROPERTY()
	bool bHasGeoChanged;

	UPROPERTY()
	bool bHasPartChanged;

	UPROPERTY()
	bool bHasTransformChanged;

	UPROPERTY()
	bool bHasMaterialsChanged;

	UPROPERTY()
	TArray<FHoudiniMeshSocket> AllMeshSockets;

public:
	HOUDINIENGINERUNTIME_API FHoudiniGeoPartObject();
};

FORCEINLINE uint32 GetTypeHash(const FHoudiniGeoPartObject) { return 0; }
