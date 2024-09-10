#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "PlatformSupportSubsystem.generated.h"

UCLASS()
class PLATFORMUTILITIES_API UPlatformSupportSubsystem : public UGameInstanceSubsystem
{
	GENERATED_BODY()

public:
	UFUNCTION(Exec)
	void DBD_StadiaShowStreamDebug(bool bEnabled);

	UFUNCTION(Exec)
	void DBD_StadiaRoleSelectPoll();

	UFUNCTION(Exec)
	void DBD_StadiaCharacterSelectPoll();

public:
	UPlatformSupportSubsystem();
};

FORCEINLINE uint32 GetTypeHash(const UPlatformSupportSubsystem) { return 0; }
