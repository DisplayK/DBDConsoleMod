#pragma once

#include "CoreMinimal.h"
#include "OutlineUpdateStrategy.h"
#include "UObject/NoExportTypes.h"
#include "AlwaysVisibleToGlyphQuestHolderOutlineUpdateStrategy.generated.h"

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class UAlwaysVisibleToGlyphQuestHolderOutlineUpdateStrategy : public UOutlineUpdateStrategy
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	FLinearColor _outlineColor;

	UPROPERTY(EditDefaultsOnly)
	FName _glyphQuestId;

public:
	UAlwaysVisibleToGlyphQuestHolderOutlineUpdateStrategy();
};

FORCEINLINE uint32 GetTypeHash(const UAlwaysVisibleToGlyphQuestHolderOutlineUpdateStrategy) { return 0; }
