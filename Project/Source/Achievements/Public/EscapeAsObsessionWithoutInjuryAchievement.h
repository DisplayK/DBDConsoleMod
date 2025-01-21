#pragma once

#include "CoreMinimal.h"
#include "EscapeTypeAchievement.h"
#include "EscapeAsObsessionWithoutInjuryAchievement.generated.h"

UCLASS()
class ACHIEVEMENTS_API UEscapeAsObsessionWithoutInjuryAchievement : public UEscapeTypeAchievement
{
	GENERATED_BODY()

public:
	UEscapeAsObsessionWithoutInjuryAchievement();
};

FORCEINLINE uint32 GetTypeHash(const UEscapeAsObsessionWithoutInjuryAchievement) { return 0; }
