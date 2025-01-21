#pragma once

#include "CoreMinimal.h"
#include "AimDirectionProvider.h"
#include "SurvivorAimStanceCameraDirectionProvider.generated.h"

UCLASS(EditInlineNew)
class DBDGAMEPLAY_API USurvivorAimStanceCameraDirectionProvider : public UAimDirectionProvider
{
	GENERATED_BODY()

public:
	USurvivorAimStanceCameraDirectionProvider();
};

FORCEINLINE uint32 GetTypeHash(const USurvivorAimStanceCameraDirectionProvider) { return 0; }
