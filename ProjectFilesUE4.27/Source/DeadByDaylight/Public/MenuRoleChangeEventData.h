#pragma once

#include "CoreMinimal.h"
#include "EPlayerRole.h"
#include "MenuRoleChangeEventData.generated.h"

USTRUCT()
struct FMenuRoleChangeEventData
{
	GENERATED_BODY()

public:
	UPROPERTY(Transient)
	EPlayerRole PlayerRole;

public:
	DEADBYDAYLIGHT_API FMenuRoleChangeEventData();
};

FORCEINLINE uint32 GetTypeHash(const FMenuRoleChangeEventData) { return 0; }
