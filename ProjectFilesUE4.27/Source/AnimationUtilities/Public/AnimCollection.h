#pragma once

#include "CoreMinimal.h"
#include "AnimSequenceSelector.h"
#include "Engine/DataAsset.h"
#include "GameplayTagContainer.h"
#include "AnimCollection.generated.h"

class UBlendSpaceBase;
class UAnimSequence;
class UAnimCollection;

UCLASS(BlueprintType)
class ANIMATIONUTILITIES_API UAnimCollection : public UDataAsset
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
	TMap<FGameplayTag, UAnimSequence*> _taggedAnimSequences;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
	TMap<FGameplayTag, UBlendSpaceBase*> _taggedAnimBlendspaces;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
	TMap<FGameplayTag, FAnimSequenceSelector> _taggedAnimSelectors;

	UPROPERTY(EditDefaultsOnly)
	UAnimCollection* _parent;

	UPROPERTY(EditDefaultsOnly)
	TArray<UAnimCollection*> _children;

public:
	UAnimCollection();
};

FORCEINLINE uint32 GetTypeHash(const UAnimCollection) { return 0; }
