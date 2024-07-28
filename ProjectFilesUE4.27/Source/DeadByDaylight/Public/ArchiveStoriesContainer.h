#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ArchiveStoriesContainer.generated.h"

class UWalletHandler;
class URewardTrackContainer;
class UArchiveVignettesContainer;

UCLASS()
class DEADBYDAYLIGHT_API UArchiveStoriesContainer : public UObject
{
	GENERATED_BODY()

private:
	UPROPERTY(Transient)
	URewardTrackContainer* _rewardTrackcontainer;

	UPROPERTY(Transient)
	UWalletHandler* _wallet;

	UPROPERTY(Transient)
	UArchiveVignettesContainer* _vignettesContainer;

public:
	UArchiveStoriesContainer();
};

FORCEINLINE uint32 GetTypeHash(const UArchiveStoriesContainer) { return 0; }
