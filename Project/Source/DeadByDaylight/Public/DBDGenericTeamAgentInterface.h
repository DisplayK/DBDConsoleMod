#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "GenericTeamAgentInterface.h"
#include "DBDGenericTeamAgentInterface.generated.h"

UINTERFACE()
class DEADBYDAYLIGHT_API UDBDGenericTeamAgentInterface : public UGenericTeamAgentInterface
{
	GENERATED_BODY()
};

class DEADBYDAYLIGHT_API IDBDGenericTeamAgentInterface : public IGenericTeamAgentInterface
{
	GENERATED_BODY()

};
