#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "DailyRitualContainer.h"
#include "DailyRitualInstance.h"
#include "CoreRitualsContent.h"
#include "RitualsManager.generated.h"

UCLASS()
class DEADBYDAYLIGHT_API URitualsManager : public UGameInstanceSubsystem
{
	GENERATED_BODY()

private:
	UPROPERTY()
	FDailyRitualContainer _cachedRitualContainer;

	UPROPERTY()
	FDailyRitualInstance _cachedDismissalReplacement;

	UPROPERTY()
	FDailyRitualInstance _cachedClaimedReplacement;

	UPROPERTY(Transient)
	FCoreRitualsContent _s3Content;

public:
	URitualsManager();
};

FORCEINLINE uint32 GetTypeHash(const URitualsManager) { return 0; }
