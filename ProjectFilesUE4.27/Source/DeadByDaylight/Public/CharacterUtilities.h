#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "UObject/NoExportTypes.h"
#include "CharacterUtilities.generated.h"

class ACharacter;

UCLASS(BlueprintType)
class DEADBYDAYLIGHT_API UCharacterUtilities : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintPure)
	static FVector GetFeetPositionAtTargetLocation(const ACharacter* character, const FVector& location);

	UFUNCTION(BlueprintPure)
	static FVector GetFeetPosition(const ACharacter* character);

	UFUNCTION(BlueprintPure)
	static FVector GetActorLocationFromFeetLocation(const ACharacter* character, const FVector& feetLocation);

public:
	UCharacterUtilities();
};

FORCEINLINE uint32 GetTypeHash(const UCharacterUtilities) { return 0; }
