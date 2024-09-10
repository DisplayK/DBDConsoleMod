#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "UIBackendDataAccessor.generated.h"

class USplinteredStatesSubsystem;

UCLASS()
class UIBACKENDDATA_API UUIBackendDataAccessor : public UGameInstanceSubsystem
{
	GENERATED_BODY()

private:
	UPROPERTY(Transient)
	USplinteredStatesSubsystem* _splinteredStateSubsystem;

public:
	UUIBackendDataAccessor();
};

FORCEINLINE uint32 GetTypeHash(const UUIBackendDataAccessor) { return 0; }
