#pragma once

#include "CoreMinimal.h"
#include "RoleDropdown.h"
#include "AddonDropdown.generated.h"

USTRUCT()
struct FAddonDropdown: public FRoleDropdown
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	FName AddonID;

public:
	DEADBYDAYLIGHT_API FAddonDropdown();
};

FORCEINLINE uint32 GetTypeHash(const FAddonDropdown) { return 0; }
