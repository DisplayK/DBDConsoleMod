#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "StoreControllerSubsystem.generated.h"

class UStoreDisplayStandController;

UCLASS()
class DEADBYDAYLIGHT_API UStoreControllerSubsystem : public UGameInstanceSubsystem
{
	GENERATED_BODY()

private:
	UPROPERTY(Transient)
	UStoreDisplayStandController* _displayStandController;

public:
	UStoreControllerSubsystem();
};

FORCEINLINE uint32 GetTypeHash(const UStoreControllerSubsystem) { return 0; }
