#pragma once

#include "CoreMinimal.h"
#include "RoleDropdown.h"
#include "CharacterDropdown.generated.h"

USTRUCT(BlueprintType)
struct FCharacterDropdown: public FRoleDropdown
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	int32 CharacterID;

public:
	DEADBYDAYLIGHT_API FCharacterDropdown();
};

FORCEINLINE uint32 GetTypeHash(const FCharacterDropdown) { return 0; }
