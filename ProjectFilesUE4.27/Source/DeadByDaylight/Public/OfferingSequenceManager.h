#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Templates/SubclassOf.h"
#include "EOfferingSequenceState.h"
#include "OfferingSequenceManager.generated.h"

class ACameraActor;
class ADBDLobbyHud;
class UDBDGameInstance;
class UOfferingHandler;
class APlayerController;
class AOfferingSequenceAssets;
class AOfferingCard;

UCLASS()
class DEADBYDAYLIGHT_API AOfferingSequenceManager : public AActor
{
	GENERATED_BODY()

private:
	UPROPERTY(Transient)
	UDBDGameInstance* _gameInstance;

	UPROPERTY(Transient)
	APlayerController* _localPlayerController;

	UPROPERTY(Transient)
	UOfferingHandler* _offeringHandler;

	UPROPERTY(Transient)
	AOfferingSequenceAssets* _sequenceAssets;

	UPROPERTY(Transient)
	ADBDLobbyHud* _hud;

	UPROPERTY(Transient)
	ACameraActor* _offeringCamera;

	UPROPERTY(Transient)
	TMap<uint8, AOfferingCard*> _spawnedCards;

	UPROPERTY(Transient)
	TSubclassOf<AOfferingCard> _defaultCardsClass;

	UPROPERTY(Transient)
	TSubclassOf<AOfferingCard> _eventCardsClass;

protected:
	UFUNCTION(BlueprintImplementableEvent)
	void HandleSequenceStateChanged(EOfferingSequenceState state);

	UFUNCTION(BlueprintImplementableEvent)
	void HandleSequenceStarted();

	UFUNCTION(BlueprintImplementableEvent)
	void HandleSequenceEnded();

public:
	UFUNCTION(BlueprintPure)
	EOfferingSequenceState GetCurrentState() const;

private:
	UFUNCTION()
	void FadeInScreen();

public:
	UFUNCTION(BlueprintPure)
	bool ContainsEventCard() const;

	UFUNCTION(BlueprintPure)
	bool ContainsDefaultCard() const;

public:
	AOfferingSequenceManager();
};

FORCEINLINE uint32 GetTypeHash(const AOfferingSequenceManager) { return 0; }
