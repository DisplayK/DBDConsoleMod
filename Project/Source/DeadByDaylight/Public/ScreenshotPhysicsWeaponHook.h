#pragma once

#include "CoreMinimal.h"
#include "ScreenshotToolHook.h"
#include "UObject/NoExportTypes.h"
#include "ScreenshotPhysicsWeaponHook.generated.h"

UCLASS(BlueprintType)
class UScreenshotPhysicsWeaponHook : public UObject, public IScreenshotToolHook
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TArray<FName> KillersId;

public:
	UScreenshotPhysicsWeaponHook();
};

FORCEINLINE uint32 GetTypeHash(const UScreenshotPhysicsWeaponHook) { return 0; }
