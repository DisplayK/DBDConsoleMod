#pragma once

#include "CoreMinimal.h"
#include "OnKillerHitZombie.generated.h"

class AZombieCharacter;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnKillerHitZombie, AZombieCharacter*, zombieCharater);
