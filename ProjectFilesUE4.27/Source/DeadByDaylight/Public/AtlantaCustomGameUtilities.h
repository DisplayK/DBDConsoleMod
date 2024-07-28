#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "AtlantaCustomGameUtilities.generated.h"

class UDBDGameInstance;

UCLASS(BlueprintType)
class DEADBYDAYLIGHT_API UAtlantaCustomGameUtilities : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable)
	static bool IsInCustomGameLobby(const UDBDGameInstance* gameInstance);

	UFUNCTION(BlueprintCallable)
	static bool IsCustomGameEnabled();

public:
	UAtlantaCustomGameUtilities();
};

FORCEINLINE uint32 GetTypeHash(const UAtlantaCustomGameUtilities) { return 0; }
