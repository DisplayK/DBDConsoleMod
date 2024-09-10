#pragma once

#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "UObject/SoftObjectPtr.h"
#include "UObject/NoExportTypes.h"
#include "EditorMeshVisualization.generated.h"

class USkeletalMesh;

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UEditorMeshVisualization : public USceneComponent
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftObjectPtr<USkeletalMesh> MeshVisualization;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FTransform RelativeTransform;

public:
	UEditorMeshVisualization();
};

FORCEINLINE uint32 GetTypeHash(const UEditorMeshVisualization) { return 0; }
