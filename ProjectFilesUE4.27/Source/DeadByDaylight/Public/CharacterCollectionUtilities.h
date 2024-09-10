#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EPlayerTeam.h"
#include "CharacterCollectionUtilities.generated.h"

class ASlasherPlayer;
class ADBDPlayer;
class UObject;
class ACharacter;
class ACamperPlayer;

UCLASS(BlueprintType)
class DEADBYDAYLIGHT_API UCharacterCollectionUtilities : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintPure)
	static int32 GetNumberOfInjuredHookedOrDyingSurvivors(const UObject* worldContextObject);

	UFUNCTION(BlueprintPure)
	static ASlasherPlayer* GetKiller(const UObject* worldContextObject);

	UFUNCTION(BlueprintPure)
	static TSet<ACamperPlayer*> GetInGameSurvivorsByRef(const UObject* worldContextObject);

	UFUNCTION(BlueprintPure)
	static TArray<ADBDPlayer*> GetInGameSurvivorsAsPlayers(const UObject* worldContextObject);

	UFUNCTION(BlueprintPure)
	static TArray<ACamperPlayer*> GetInGameSurvivors(const UObject* worldContextObject);

	UFUNCTION(BlueprintPure)
	static TArray<ADBDPlayer*> GetInGamePlayers(const UObject* worldContextObject);

	UFUNCTION(BlueprintPure)
	static TArray<ADBDPlayer*> GetCharactersByPlayerTeam(EPlayerTeam playerTeam, const UObject* worldContextObject);

	UFUNCTION(BlueprintPure)
	static TArray<ADBDPlayer*> GetAllDBDPlayers(const UObject* worldContextObject);

	UFUNCTION(BlueprintPure)
	static TSet<ACharacter*> GetAllCharacters(const UObject* worldContextObject);

public:
	UCharacterCollectionUtilities();
};

FORCEINLINE uint32 GetTypeHash(const UCharacterCollectionUtilities) { return 0; }
