#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ActorComponentExt.generated.h"

class UActorComponent;
class AActor;
class ACharacter;
class ACamperPlayer;
class ADBDPlayer;
class ASlasherPlayer;
class APawn;

UCLASS(BlueprintType)
class DEADBYDAYLIGHT_API UActorComponentExt : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintPure)
	static bool IsLocallyObserved(const UActorComponent* actorComponent, bool recursiveSearch);

	UFUNCTION(BlueprintPure)
	static bool IsLocallyControlled(const UActorComponent* actorComponent, bool recursiveSearch);

	UFUNCTION(BlueprintPure)
	static bool HasAuthority(const UActorComponent* actorComponent);

	UFUNCTION(BlueprintPure)
	static AActor* GetValidatedOwner(const UActorComponent* actorComponent);

	UFUNCTION(BlueprintPure)
	static ACamperPlayer* GetOwningSurvivorChecked(const UActorComponent* actorComponent, bool recursiveSearch);

	UFUNCTION(BlueprintPure)
	static ACamperPlayer* GetOwningSurvivor(const UActorComponent* actorComponent, bool recursiveSearch);

	UFUNCTION(BlueprintPure)
	static ADBDPlayer* GetOwningPlayerInHierarchy(const UActorComponent* actorComponent);

	UFUNCTION(BlueprintPure)
	static ADBDPlayer* GetOwningPlayerChecked(const UActorComponent* actorComponent, bool recursiveSearch);

	UFUNCTION(BlueprintPure)
	static ADBDPlayer* GetOwningPlayer(const UActorComponent* actorComponent, bool recursiveSearch);

	UFUNCTION(BlueprintPure)
	static APawn* GetOwningPawnChecked(const UActorComponent* actorComponent, bool recursiveSearch);

	UFUNCTION(BlueprintPure)
	static APawn* GetOwningPawn(const UActorComponent* actorComponent, bool recursiveSearch);

	UFUNCTION(BlueprintPure)
	static ASlasherPlayer* GetOwningKiller(const UActorComponent* actorComponent, bool recursiveSearch);

	UFUNCTION(BlueprintPure)
	static ACharacter* GetOwningCharacterChecked(const UActorComponent* actorComponent, bool recursiveSearch);

	UFUNCTION(BlueprintPure)
	static ACharacter* GetOwningCharacter(const UActorComponent* actorComponent, bool recursiveSearch);

public:
	UActorComponentExt();
};

FORCEINLINE uint32 GetTypeHash(const UActorComponentExt) { return 0; }
