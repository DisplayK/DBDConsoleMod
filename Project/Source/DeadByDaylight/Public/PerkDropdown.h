#pragma once

#include "CoreMinimal.h"
#include "RoleDropdown.h"
#include "PerkDropdown.generated.h"

USTRUCT(BlueprintType)
struct FPerkDropdown: public FRoleDropdown
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	FName PerkID;

public:
	DEADBYDAYLIGHT_API FPerkDropdown();
};

FORCEINLINE uint32 GetTypeHash(const FPerkDropdown) { return 0; }
