#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "DelegateHandleWrapper.h"
#include "ESightStatus.h"
#include "CharacterSightableComponent.generated.h"

class ACharacter;

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class GAMEPLAYUTILITIES_API UCharacterSightableComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnHighestSightStatusChangedBP, ESightStatus, status);

public:
	UPROPERTY(BlueprintAssignable)
	FOnHighestSightStatusChangedBP OnHighestSightStatusChangedBP;

private:
	UPROPERTY(Transient)
	TMap<TWeakObjectPtr<ACharacter>, FDelegateHandleWrapper> _sightDelegateHandles;

	UPROPERTY(Transient)
	TMap<TWeakObjectPtr<ACharacter>, ESightStatus> _sightersStatus;

public:
	UFUNCTION(BlueprintPure)
	ESightStatus GetHighestSightStatus() const;

public:
	UCharacterSightableComponent();
};

FORCEINLINE uint32 GetTypeHash(const UCharacterSightableComponent) { return 0; }
