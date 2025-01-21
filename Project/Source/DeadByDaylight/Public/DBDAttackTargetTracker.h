#pragma once

#include "CoreMinimal.h"
#include "StatProperty.h"
#include "DBDAttackTargetTracker.generated.h"

class ACharacter;
class ADBDPlayer;

USTRUCT()
struct FDBDAttackTargetTracker
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	bool _useTargetTracking;

	UPROPERTY(EditDefaultsOnly)
	FStatProperty _targetSnapDistance;

	UPROPERTY(EditDefaultsOnly)
	FName _ownerEyeSocketName;

	UPROPERTY(EditDefaultsOnly)
	FName _targetBoneName;

	UPROPERTY(Transient)
	TWeakObjectPtr<ACharacter> _trackedTarget;

	UPROPERTY(Transient)
	TWeakObjectPtr<ADBDPlayer> _owningPlayer;

public:
	DEADBYDAYLIGHT_API FDBDAttackTargetTracker();
};

FORCEINLINE uint32 GetTypeHash(const FDBDAttackTargetTracker) { return 0; }
