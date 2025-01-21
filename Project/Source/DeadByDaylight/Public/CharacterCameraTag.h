#pragma once

#include "CoreMinimal.h"
#include "SimpleCharacterDropdown.h"
#include "CharacterCameraTag.generated.h"

class ACameraActor;

USTRUCT(BlueprintType)
struct FCharacterCameraTag
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	ACameraActor* Camera;

	UPROPERTY(EditAnywhere)
	TArray<FSimpleCharacterDropdown> Characters;

public:
	DEADBYDAYLIGHT_API FCharacterCameraTag();
};

FORCEINLINE uint32 GetTypeHash(const FCharacterCameraTag) { return 0; }
