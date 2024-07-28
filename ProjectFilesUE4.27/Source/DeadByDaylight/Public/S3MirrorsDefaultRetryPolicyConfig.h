#pragma once

#include "CoreMinimal.h"
#include "S3MirrorsDefaultRetryPolicyConfig.generated.h"

USTRUCT()
struct FS3MirrorsDefaultRetryPolicyConfig
{
	GENERATED_BODY()

public:
	UPROPERTY()
	bool Enabled;

	UPROPERTY()
	int32 RetryCount;

	UPROPERTY()
	int32 Timeout;

public:
	DEADBYDAYLIGHT_API FS3MirrorsDefaultRetryPolicyConfig();
};

FORCEINLINE uint32 GetTypeHash(const FS3MirrorsDefaultRetryPolicyConfig) { return 0; }
