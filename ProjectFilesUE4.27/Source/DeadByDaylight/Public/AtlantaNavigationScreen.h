#pragma once

#include "CoreMinimal.h"
#include "ScreenBase.h"
#include "AtlantaNavigationScreen.generated.h"

class UUMGAtlantaNavigationScreen;

UCLASS()
class DEADBYDAYLIGHT_API UAtlantaNavigationScreen : public UScreenBase
{
	GENERATED_BODY()

private:
	UPROPERTY(Transient, Export)
	UUMGAtlantaNavigationScreen* _umgScreen;

public:
	UAtlantaNavigationScreen();
};

FORCEINLINE uint32 GetTypeHash(const UAtlantaNavigationScreen) { return 0; }
