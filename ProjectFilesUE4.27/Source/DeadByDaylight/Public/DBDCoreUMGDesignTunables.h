#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/SoftObjectPtr.h"
#include "DBDCoreUMGDesignTunables.generated.h"

class ADBDPlayerController;
class UCoreHudRootWidget;

UCLASS(Transient)
class DEADBYDAYLIGHT_API UDBDCoreUMGDesignTunables : public UObject
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, NoClear)
	TSoftClassPtr<UCoreHudRootWidget> CoreHudRootWidgetClass;

	UPROPERTY(EditAnywhere, NoClear)
	TSoftClassPtr<ADBDPlayerController> CorePlayerControllerClass;

public:
	UDBDCoreUMGDesignTunables();
};

FORCEINLINE uint32 GetTypeHash(const UDBDCoreUMGDesignTunables) { return 0; }
