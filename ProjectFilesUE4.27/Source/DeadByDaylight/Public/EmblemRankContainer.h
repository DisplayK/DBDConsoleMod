#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "EmblemRankContainer.generated.h"

UCLASS()
class DEADBYDAYLIGHT_API UEmblemRankContainer : public UGameInstanceSubsystem
{
	GENERATED_BODY()

public:
	UEmblemRankContainer();
};

FORCEINLINE uint32 GetTypeHash(const UEmblemRankContainer) { return 0; }
