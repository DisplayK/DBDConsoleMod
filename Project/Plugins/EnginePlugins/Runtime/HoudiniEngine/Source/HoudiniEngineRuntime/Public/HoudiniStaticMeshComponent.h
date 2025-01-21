#pragma once

#include "CoreMinimal.h"
#include "Components/MeshComponent.h"
#include "UObject/NoExportTypes.h"
#include "HoudiniStaticMeshComponent.generated.h"

class UHoudiniStaticMesh;

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class HOUDINIENGINERUNTIME_API UHoudiniStaticMeshComponent : public UMeshComponent
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere)
	UHoudiniStaticMesh* Mesh;

	UPROPERTY()
	FBox LocalBounds;

	UPROPERTY(EditAnywhere)
	bool bHoudiniIconVisible;

public:
	UFUNCTION()
	void SetMesh(UHoudiniStaticMesh* InMesh);

	UFUNCTION()
	void SetHoudiniIconVisible(bool bInHoudiniIconVisible);

	UFUNCTION()
	void NotifyMeshUpdated();

	UFUNCTION()
	bool IsHoudiniIconVisible() const;

	UFUNCTION()
	UHoudiniStaticMesh* GetMesh();

public:
	UHoudiniStaticMeshComponent();
};

FORCEINLINE uint32 GetTypeHash(const UHoudiniStaticMeshComponent) { return 0; }
