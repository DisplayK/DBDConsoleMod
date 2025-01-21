#pragma once

#include "CoreMinimal.h"
#include "S3SecurityConfig.generated.h"

USTRUCT()
struct FS3SecurityConfig
{
	GENERATED_BODY()

public:
	UPROPERTY()
	bool AllowServerCheats;

	UPROPERTY()
	bool AllowClientGuestProviderOnServerLogin;

public:
	DEADBYDAYLIGHT_API FS3SecurityConfig();
};

FORCEINLINE uint32 GetTypeHash(const FS3SecurityConfig) { return 0; }
