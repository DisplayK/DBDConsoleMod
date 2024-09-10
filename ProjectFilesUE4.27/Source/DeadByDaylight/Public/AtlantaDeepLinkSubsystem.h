#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "AtlantaDeepLinkSubsystem.generated.h"

UCLASS()
class DEADBYDAYLIGHT_API UAtlantaDeepLinkSubsystem : public UGameInstanceSubsystem
{
	GENERATED_BODY()

public:
	UAtlantaDeepLinkSubsystem();
};

FORCEINLINE uint32 GetTypeHash(const UAtlantaDeepLinkSubsystem) { return 0; }
