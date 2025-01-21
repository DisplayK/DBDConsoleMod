#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Activatable.h"
#include "AuthorityDiscernedCharacter.h"
#include "Templates/SubclassOf.h"
#include "DiscernibleCharacter.h"
#include "ActivationDefinition.h"
#include "CharacterSightComponent.generated.h"

class ACharacter;

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class GAMEPLAYUTILITIES_API UCharacterSightComponent : public UActorComponent, public IActivatable
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere)
	float _minimumCharacterScreenPercentInZoneTrigger;

	UPROPERTY(EditAnywhere)
	float _minimumCharacterScreenPercentInZoneUntrigger;

	UPROPERTY(EditAnywhere)
	float _minimumCharacterScreenPercentNotInZoneTrigger;

	UPROPERTY(EditAnywhere)
	float _minimumCharacterScreenPercentNotInZoneUntrigger;

	UPROPERTY(EditAnywhere)
	float _minimumCharacterVisiblePixelsPercentTrigger;

	UPROPERTY(EditAnywhere)
	float _minimumCharacterVisiblePixelsPercentUntrigger;

	UPROPERTY(EditAnywhere)
	float _maximumSightDistance;

	UPROPERTY(EditAnywhere)
	float _screenVisibilityZoneRadiusPercentX;

	UPROPERTY(EditAnywhere)
	float _screenVisibilityZoneRadiusPercentY;

	UPROPERTY(EditAnywhere)
	float _sightingDelay;

	UPROPERTY(EditAnywhere)
	float _discerningDelay;

	UPROPERTY(EditAnywhere)
	float _undiscerningDelay;

	UPROPERTY(EditAnywhere)
	TSubclassOf<ACharacter> _sightableCharacterClass;

	UPROPERTY(ReplicatedUsing=OnRep_DiscernibleCharacters, Transient)
	TArray<FAuthorityDiscernedCharacter> _discernedCharacters;

	UPROPERTY(Transient)
	TArray<FDiscernibleCharacter> _localDiscernibleCharacters;

	UPROPERTY(EditAnywhere)
	bool _debugMode;

	UPROPERTY(ReplicatedUsing=OnRep_CanSee)
	bool _canSee;

	UPROPERTY(EditAnywhere)
	FActivationDefinition _activationDefinition;

public:
	UFUNCTION(BlueprintCallable)
	void SetScreenVisibilityZoneRadiusPercent(float valueX, float valueY);

	UFUNCTION(BlueprintCallable)
	void SetMinimumCharacterVisiblePixelsPercent(float trigger, float untrigger);

	UFUNCTION(BlueprintCallable)
	void SetMinimumCharacterScreenPercentNotInZone(float trigger, float untrigger);

	UFUNCTION(BlueprintCallable)
	void SetMinimumCharacterScreenPercentInZone(float trigger, float untrigger);

	UFUNCTION(BlueprintCallable)
	void SetMaximumSightDistance(float value);

private:
	UFUNCTION(Server, Reliable, WithValidation)
	void Server_UpdateDiscernedCharacters(const TArray<ACharacter*>& characters);

	UFUNCTION()
	void OnRep_DiscernibleCharacters();

	UFUNCTION()
	void OnRep_CanSee();

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UCharacterSightComponent();
};

FORCEINLINE uint32 GetTypeHash(const UCharacterSightComponent) { return 0; }
