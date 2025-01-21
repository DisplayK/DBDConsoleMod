#pragma once

#include "CoreMinimal.h"
#include "RoleDropdown.h"
#include "CustomizationItemDropdown.generated.h"

USTRUCT()
struct FCustomizationItemDropdown: public FRoleDropdown
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	FName ItemID;

public:
	DEADBYDAYLIGHT_API FCustomizationItemDropdown();
};

FORCEINLINE uint32 GetTypeHash(const FCustomizationItemDropdown) { return 0; }
