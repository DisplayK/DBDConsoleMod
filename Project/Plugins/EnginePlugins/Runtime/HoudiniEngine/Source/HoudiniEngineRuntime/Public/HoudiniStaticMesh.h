#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/StaticMesh.h"
#include "HoudiniStaticMesh.generated.h"

class UMaterialInterface;

UCLASS()
class HOUDINIENGINERUNTIME_API UHoudiniStaticMesh : public UObject
{
	GENERATED_BODY()

protected:
	UPROPERTY()
	bool bHasNormals;

	UPROPERTY()
	bool bHasTangents;

	UPROPERTY()
	bool bHasColors;

	UPROPERTY()
	uint32 NumUVLayers;

	UPROPERTY()
	bool bHasPerFaceMaterials;

	UPROPERTY(SkipSerialization)
	TArray<FVector> VertexPositions;

	UPROPERTY(SkipSerialization)
	TArray<FIntVector> TriangleIndices;

	UPROPERTY(SkipSerialization)
	TArray<FColor> VertexInstanceColors;

	UPROPERTY(SkipSerialization)
	TArray<FVector> VertexInstanceNormals;

	UPROPERTY(SkipSerialization)
	TArray<FVector> VertexInstanceUTangents;

	UPROPERTY(SkipSerialization)
	TArray<FVector> VertexInstanceVTangents;

	UPROPERTY(SkipSerialization)
	TArray<FVector2D> VertexInstanceUVs;

	UPROPERTY(SkipSerialization)
	TArray<int32> MaterialIDsPerTriangle;

	UPROPERTY()
	TArray<FStaticMaterial> StaticMaterials;

public:
	UFUNCTION()
	void SetVertexPosition(uint32 InVertexIndex, const FVector& InPosition);

	UFUNCTION()
	void SetTriangleVertexVTangent(uint32 InTriangleIndex, uint8 InTriangleVertexIndex, const FVector& InVTangent);

	UFUNCTION()
	void SetTriangleVertexUV(uint32 InTriangleIndex, uint8 InTriangleVertexIndex, uint8 InUVLayer, const FVector2D& InUV);

	UFUNCTION()
	void SetTriangleVertexUTangent(uint32 InTriangleIndex, uint8 InTriangleVertexIndex, const FVector& InUTangent);

	UFUNCTION()
	void SetTriangleVertexNormal(uint32 InTriangleIndex, uint8 InTriangleVertexIndex, const FVector& InNormal);

	UFUNCTION()
	void SetTriangleVertexIndices(uint32 InTriangleIndex, const FIntVector& InTriangleVertexIndices);

	UFUNCTION()
	void SetTriangleVertexColor(uint32 InTriangleIndex, uint8 InTriangleVertexIndex, const FColor& InColor);

	UFUNCTION()
	void SetTriangleMaterialID(uint32 InTriangleIndex, int32 InMaterialID);

	UFUNCTION()
	void SetStaticMaterial(uint32 InMaterialIndex, const FStaticMaterial& InStaticMaterial);

	UFUNCTION()
	void SetNumUVLayers(uint32 InNumUVLayers);

	UFUNCTION()
	void SetNumStaticMaterials(uint32 InNumStaticMaterials);

	UFUNCTION()
	void SetHasTangents(bool bInHasTangents);

	UFUNCTION()
	void SetHasPerFaceMaterials(bool bInHasPerFaceMaterials);

	UFUNCTION()
	void SetHasNormals(bool bInHasNormals);

	UFUNCTION()
	void SetHasColors(bool bInHasColors);

	UFUNCTION()
	void Optimize();

	UFUNCTION()
	bool IsValid(bool bInSkipVertexIndicesCheck) const;

	UFUNCTION()
	void Initialize(uint32 InNumVertices, uint32 InNumTriangles, uint32 InNumUVLayers, uint32 InInitialNumStaticMaterials, bool bInHasNormals, bool bInHasTangents, bool bInHasColors, bool bInHasPerFaceMaterials);

	UFUNCTION()
	bool HasTangents() const;

	UFUNCTION()
	bool HasPerFaceMaterials() const;

	UFUNCTION()
	bool HasNormals() const;

	UFUNCTION()
	bool HasColors() const;

	UFUNCTION()
	TArray<FVector> GetVertexPositions() const;

	UFUNCTION()
	TArray<FVector> GetVertexInstanceVTangents() const;

	UFUNCTION()
	TArray<FVector2D> GetVertexInstanceUVs() const;

	UFUNCTION()
	TArray<FVector> GetVertexInstanceUTangents() const;

	UFUNCTION()
	TArray<FVector> GetVertexInstanceNormals() const;

	UFUNCTION()
	TArray<FColor> GetVertexInstanceColors() const;

	UFUNCTION()
	TArray<FIntVector> GetTriangleIndices() const;

	UFUNCTION()
	TArray<FStaticMaterial> GetStaticMaterials() const;

	UFUNCTION()
	uint32 GetNumVertices() const;

	UFUNCTION()
	uint32 GetNumVertexInstances() const;

	UFUNCTION()
	uint32 GetNumUVLayers() const;

	UFUNCTION()
	uint32 GetNumTriangles() const;

	UFUNCTION()
	uint32 GetNumStaticMaterials() const;

	UFUNCTION()
	int32 GetMaterialIndex(FName InMaterialSlotName) const;

	UFUNCTION()
	TArray<int32> GetMaterialIDsPerTriangle() const;

	UFUNCTION()
	UMaterialInterface* GetMaterial(int32 InMaterialIndex);

	UFUNCTION()
	void CalculateTangents(bool bInComputeWeightedNormals);

	UFUNCTION()
	void CalculateNormals(bool bInComputeWeightedNormals);

	UFUNCTION()
	FBox CalcBounds() const;

	UFUNCTION()
	uint32 AddStaticMaterial(const FStaticMaterial& InStaticMaterial);

public:
	UHoudiniStaticMesh();
};

FORCEINLINE uint32 GetTypeHash(const UHoudiniStaticMesh) { return 0; }
