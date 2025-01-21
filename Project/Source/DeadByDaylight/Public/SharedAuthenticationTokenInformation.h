#pragma once

#include "CoreMinimal.h"
#include "SharedAuthenticationTokenInformation.generated.h"

USTRUCT(BlueprintType)
struct FSharedAuthenticationTokenInformation
{
	GENERATED_BODY()

public:
	UPROPERTY()
	FString LoginProvider;

	UPROPERTY()
	FString AuthToken;

	UPROPERTY()
	FString TokenType;

public:
	DEADBYDAYLIGHT_API FSharedAuthenticationTokenInformation();
};

FORCEINLINE uint32 GetTypeHash(const FSharedAuthenticationTokenInformation) { return 0; }
