#pragma once

#include "CoreMinimal.h"
#include "ScreenBase.h"
#include "AtlantaRoleSelectionScreen.generated.h"

class UUMGRoleSelectionScreen;

UCLASS()
class UAtlantaRoleSelectionScreen : public UScreenBase
{
	GENERATED_BODY()

private:
	UPROPERTY(Export)
	UUMGRoleSelectionScreen* _umgScreen;

public:
	UAtlantaRoleSelectionScreen();
};

FORCEINLINE uint32 GetTypeHash(const UAtlantaRoleSelectionScreen) { return 0; }
