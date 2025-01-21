#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "MovementUtilities.generated.h"

class AActor;

UCLASS(BlueprintType)
class GAMEPLAYUTILITIES_API UMovementUtilities : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable)
	static void Local_MoveActorTo(AActor* actor, const FVector& location, const FRotator& rotation, const float duration);

public:
	UMovementUtilities();
};

FORCEINLINE uint32 GetTypeHash(const UMovementUtilities) { return 0; }
