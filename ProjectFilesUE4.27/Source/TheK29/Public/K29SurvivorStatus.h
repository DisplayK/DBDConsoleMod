#pragma once

#include "CoreMinimal.h"
#include "EK29SurvivorInteractionBlockReason.h"
#include "K29SurvivorStatus.generated.h"

class UChargeableInteractionDefinition;
class UK29SurvivorThrowableComponent;
class UChargeableComponent;
class ACamperPlayer;
class UK29SurvivorCarriableComponent;

USTRUCT()
struct FK29SurvivorStatus
{
	GENERATED_BODY()

public:
	UPROPERTY(Transient)
	bool IsGrabbedByPower;

	UPROPERTY(Transient)
	float LastTimeGrabbedByPower;

	UPROPERTY(Transient)
	ACamperPlayer* OwningSurvivor;

	UPROPERTY(Transient)
	int32 InfectionLevel;

	UPROPERTY(Transient)
	int32 TimesCuredByHeal;

	UPROPERTY(Transient)
	bool IsInfected;

	UPROPERTY(Transient)
	bool IsInfectionActive;

	UPROPERTY(Transient, Export)
	UChargeableInteractionDefinition* UseInfectionRemoverInteractionSelf;

	UPROPERTY(Transient, Export)
	UChargeableInteractionDefinition* UseInfectionRemoverInteractionOther;

	UPROPERTY(Transient, Export)
	UChargeableComponent* UseInfectionRemoverChargeable;

	UPROPERTY(NotReplicated, Transient)
	bool AreInfectionRemoverInteractionsInitialized;

	UPROPERTY(Transient, Export)
	UK29SurvivorCarriableComponent* CarriableComponent;

	UPROPERTY(Transient, Export)
	UK29SurvivorThrowableComponent* ThrowableComponent;

	UPROPERTY(NotReplicated, Transient)
	TArray<EK29SurvivorInteractionBlockReason> InteractionBlockReasons;

public:
	THEK29_API FK29SurvivorStatus();
};

FORCEINLINE uint32 GetTypeHash(const FK29SurvivorStatus) { return 0; }
