#pragma once

#include "CoreMinimal.h"
#include "CharacterDropdown.h"
#include "UObject/SoftObjectPtr.h"
#include "GameFramework/Actor.h"
#include "UObject/NoExportTypes.h"
#include "DisplayStand.generated.h"

class ACharm;

UCLASS()
class DEADBYDAYLIGHT_API ADisplayStand : public AActor
{
	GENERATED_BODY()

protected:
	UPROPERTY()
	AActor* _currentActorDisplayed;

private:
	UPROPERTY()
	UClass* _currentActorDisplayedClass;

	UPROPERTY()
	UClass* _nextActorToDisplayClass;

	UPROPERTY(EditInstanceOnly)
	TMap<UClass*, FTransform> _offsetByClass;

	UPROPERTY(EditInstanceOnly)
	TMap<UClass*, bool> _enableRotationByClass;

	UPROPERTY(EditDefaultsOnly)
	TSoftClassPtr<ACharm> _defaultCharmClassDisplayable;

	UPROPERTY(EditInstanceOnly)
	bool _useOffsetMenuAnimations;

	UPROPERTY(EditInstanceOnly)
	bool _displayDummyCharacter;

	UPROPERTY(EditAnywhere)
	FCharacterDropdown _characterDropdown;

private:
	UFUNCTION()
	void OnCurrentActorDestroyed(AActor* destroyedActor);

public:
	UFUNCTION()
	void BlockRotation(bool shouldBlockRotation);

public:
	ADisplayStand();
};

FORCEINLINE uint32 GetTypeHash(const ADisplayStand) { return 0; }
