#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AnimEffectBlackBoard.generated.h"

UCLASS()
class ANIMATIONUTILITIES_API UAnimEffectBlackBoard : public UObject
{
	GENERATED_BODY()

public:
	UAnimEffectBlackBoard();
};

FORCEINLINE uint32 GetTypeHash(const UAnimEffectBlackBoard) { return 0; }
