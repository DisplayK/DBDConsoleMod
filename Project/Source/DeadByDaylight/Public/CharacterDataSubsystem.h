#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "CharacterDataSubsystem.generated.h"

UCLASS()
class DEADBYDAYLIGHT_API UCharacterDataSubsystem : public UGameInstanceSubsystem
{
	GENERATED_BODY()

public:
	UCharacterDataSubsystem();
};

FORCEINLINE uint32 GetTypeHash(const UCharacterDataSubsystem) { return 0; }
