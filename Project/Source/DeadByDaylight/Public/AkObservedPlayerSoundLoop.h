#pragma once

#include "CoreMinimal.h"
#include "AkSoundLoop.h"
#include "AkObservedPlayerSoundLoop.generated.h"

class UPlayerPerspectiveComponent;

USTRUCT(BlueprintType)
struct FAkObservedPlayerSoundLoop: public FAkSoundLoop
{
	GENERATED_BODY()

private:
	UPROPERTY(Transient, Export)
	TWeakObjectPtr<UPlayerPerspectiveComponent> _perspectiveComponent;

public:
	DEADBYDAYLIGHT_API FAkObservedPlayerSoundLoop();
};

FORCEINLINE uint32 GetTypeHash(const FAkObservedPlayerSoundLoop) { return 0; }
