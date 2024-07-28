#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "ArchivesManager.generated.h"

class UArchiveStoriesContainer;
class UArchiveVignettesContainer;
class URewardTrackContainer;

UCLASS()
class DEADBYDAYLIGHT_API UArchivesManager : public UGameInstanceSubsystem
{
	GENERATED_BODY()

private:
	UPROPERTY(Transient)
	UArchiveStoriesContainer* _storiesContainer;

	UPROPERTY(Transient)
	UArchiveVignettesContainer* _vignettesContainer;

	UPROPERTY(Transient)
	URewardTrackContainer* _rewardTrackContainer;

public:
	UArchivesManager();
};

FORCEINLINE uint32 GetTypeHash(const UArchivesManager) { return 0; }
