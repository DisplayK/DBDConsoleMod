#pragma once

#include "CoreMinimal.h"
#include "RoleDropdown.h"
#include "ItemIdDropdown.generated.h"

USTRUCT(BlueprintType)
struct FItemIdDropdown: public FRoleDropdown
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	FName ItemID;

public:
	DEADBYDAYLIGHT_API FItemIdDropdown();
};

FORCEINLINE uint32 GetTypeHash(const FItemIdDropdown) { return 0; }
