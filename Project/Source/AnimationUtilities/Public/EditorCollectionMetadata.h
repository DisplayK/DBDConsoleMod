#pragma once

#include "CoreMinimal.h"
#include "EditorCollectionMetadata.generated.h"

USTRUCT(BlueprintType)
struct FEditorCollectionMetadata
{
	GENERATED_BODY()

public:
	ANIMATIONUTILITIES_API FEditorCollectionMetadata();
};

FORCEINLINE uint32 GetTypeHash(const FEditorCollectionMetadata) { return 0; }
