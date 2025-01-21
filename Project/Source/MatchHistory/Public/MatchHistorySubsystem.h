#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "MatchHistorySubsystem.generated.h"

class USplinteredStatesSubsystem;

UCLASS()
class MATCHHISTORY_API UMatchHistorySubsystem : public UGameInstanceSubsystem
{
	GENERATED_BODY()

private:
	UPROPERTY(Transient)
	USplinteredStatesSubsystem* _splinteredStatesSubsystem;

public:
	UMatchHistorySubsystem();
};

FORCEINLINE uint32 GetTypeHash(const UMatchHistorySubsystem) { return 0; }
