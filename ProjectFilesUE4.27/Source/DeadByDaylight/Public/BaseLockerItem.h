#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "UObject/NoExportTypes.h"
#include "BaseLockerItem.generated.h"

class ALocker;

UCLASS()
class DEADBYDAYLIGHT_API ABaseLockerItem : public AActor
{
	GENERATED_BODY()

protected:
	UPROPERTY(ReplicatedUsing=OnRep_OwningLocker, Transient)
	ALocker* _owningLocker;

	UPROPERTY(EditDefaultsOnly)
	FVector _adjustedRelativePosition;

protected:
	UFUNCTION()
	void OnRep_OwningLocker();

private:
	UFUNCTION()
	void AdjustPositionOnLocker();

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	ABaseLockerItem();
};

FORCEINLINE uint32 GetTypeHash(const ABaseLockerItem) { return 0; }
