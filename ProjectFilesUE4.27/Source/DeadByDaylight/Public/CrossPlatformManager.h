#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "CrossPlatformManager.generated.h"

UCLASS()
class DEADBYDAYLIGHT_API UCrossPlatformManager : public UObject
{
	GENERATED_BODY()

private:
	UPROPERTY(Transient)
	bool _crossPlayAllowedByPlatform;

	UPROPERTY(Transient)
	bool _crossPlayAllowedByKraken;

public:
	UCrossPlatformManager();
};

FORCEINLINE uint32 GetTypeHash(const UCrossPlatformManager) { return 0; }
