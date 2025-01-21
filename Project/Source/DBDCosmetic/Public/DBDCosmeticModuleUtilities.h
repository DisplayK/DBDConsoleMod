#pragma once

#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "DBDCosmeticModuleUtilities.generated.h"

class ACamperPlayer;
class ASurvivorCosmeticHelperActor;

UCLASS(BlueprintType)
class DBDCOSMETIC_API UDBDCosmeticModuleUtilities : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintPure)
	static TArray<ASurvivorCosmeticHelperActor*> GetCosmeticHelperActorsOfSurvivorByClass(const ACamperPlayer* survivor, const TSubclassOf<ASurvivorCosmeticHelperActor> cosmeticHelperActorClassType);

	UFUNCTION(BlueprintPure)
	static TArray<ASurvivorCosmeticHelperActor*> GetCosmeticHelperActorsOfSurvivor(const ACamperPlayer* survivor);

public:
	UDBDCosmeticModuleUtilities();
};

FORCEINLINE uint32 GetTypeHash(const UDBDCosmeticModuleUtilities) { return 0; }
