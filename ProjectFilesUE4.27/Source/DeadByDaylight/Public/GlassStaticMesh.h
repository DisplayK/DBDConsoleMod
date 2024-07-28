#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/StaticMeshComponent.h"
#include "GlassStaticMesh.generated.h"

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class UGlassStaticMesh : public UStaticMeshComponent
{
	GENERATED_BODY()

public:
	UPROPERTY(EditDefaultsOnly)
	FVector defaultGlassNormalVector;

public:
	UGlassStaticMesh();
};

FORCEINLINE uint32 GetTypeHash(const UGlassStaticMesh) { return 0; }
