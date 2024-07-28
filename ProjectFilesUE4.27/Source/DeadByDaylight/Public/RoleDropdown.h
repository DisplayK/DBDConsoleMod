#pragma once

#include "CoreMinimal.h"
#include "EPlayerRole.h"
#include "RoleDropdown.generated.h"

USTRUCT()
struct FRoleDropdown
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	bool ShowRoleSelection;

	UPROPERTY(EditAnywhere)
	EPlayerRole Role;

public:
	DEADBYDAYLIGHT_API FRoleDropdown();
};

FORCEINLINE uint32 GetTypeHash(const FRoleDropdown) { return 0; }
