#pragma once

#include "CoreMinimal.h"
#include "ScreenBase.h"
#include "AtlantaRitualsScreen.generated.h"

class UUMGAtlantaRitualsScreen;

UCLASS()
class UAtlantaRitualsScreen : public UScreenBase
{
	GENERATED_BODY()

private:
	UPROPERTY(Transient, Export)
	UUMGAtlantaRitualsScreen* _umgScreen;

private:
	UFUNCTION()
	void OnRefreshRitual();

	UFUNCTION()
	void OnExitRequested();

	UFUNCTION()
	void OnClaimRewards(int32 ritualId);

public:
	UAtlantaRitualsScreen();
};

FORCEINLINE uint32 GetTypeHash(const UAtlantaRitualsScreen) { return 0; }
