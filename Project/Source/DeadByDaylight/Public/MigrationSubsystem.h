#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "MigrationSubsystem.generated.h"

UCLASS()
class DEADBYDAYLIGHT_API UMigrationSubsystem : public UGameInstanceSubsystem
{
	GENERATED_BODY()

public:
	UMigrationSubsystem();
};

FORCEINLINE uint32 GetTypeHash(const UMigrationSubsystem) { return 0; }
