#pragma once

#include "CoreMinimal.h"
#include "EscapeTypeAchievement.h"
#include "ScoreCamperEscapeThroughHatchAchievement.generated.h"

UCLASS()
class ACHIEVEMENTS_API UScoreCamperEscapeThroughHatchAchievement : public UEscapeTypeAchievement
{
	GENERATED_BODY()

public:
	UScoreCamperEscapeThroughHatchAchievement();
};

FORCEINLINE uint32 GetTypeHash(const UScoreCamperEscapeThroughHatchAchievement) { return 0; }
