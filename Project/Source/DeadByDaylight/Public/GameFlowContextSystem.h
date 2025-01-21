#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "GameFlowContextSystem.generated.h"

class URootMovie;

UCLASS(Transient)
class DEADBYDAYLIGHT_API UGameFlowContextSystem : public UGameInstanceSubsystem
{
	GENERATED_BODY()

private:
	UPROPERTY(Transient)
	URootMovie* m_RootMovie;

public:
	UGameFlowContextSystem();
};

FORCEINLINE uint32 GetTypeHash(const UGameFlowContextSystem) { return 0; }
