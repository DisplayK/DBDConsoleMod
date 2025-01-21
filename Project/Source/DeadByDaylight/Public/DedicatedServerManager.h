#pragma once

#include "CoreMinimal.h"
#include "UObject/ScriptInterface.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "DedicatedServerManager.generated.h"

class UOnlineSystemHandler;
class IDedicatedServerStartupInitializerInterface;

UCLASS()
class DEADBYDAYLIGHT_API UDedicatedServerManager : public UGameInstanceSubsystem
{
	GENERATED_BODY()

private:
	UPROPERTY(Transient)
	TScriptInterface<IDedicatedServerStartupInitializerInterface> _startupInitializer;

	UPROPERTY(Transient)
	UOnlineSystemHandler* _onlineSystemHandler;

public:
	UDedicatedServerManager();
};

FORCEINLINE uint32 GetTypeHash(const UDedicatedServerManager) { return 0; }
