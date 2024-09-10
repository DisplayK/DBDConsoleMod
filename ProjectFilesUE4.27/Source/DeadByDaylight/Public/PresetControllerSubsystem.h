#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "PresetControllerSubsystem.generated.h"

class ULoadoutPresetController;
class UCustomizationPresetController;

UCLASS()
class DEADBYDAYLIGHT_API UPresetControllerSubsystem : public UGameInstanceSubsystem
{
	GENERATED_BODY()

private:
	UPROPERTY(Transient)
	ULoadoutPresetController* _loadoutController;

	UPROPERTY(Transient)
	UCustomizationPresetController* _customizationController;

public:
	UPresetControllerSubsystem();
};

FORCEINLINE uint32 GetTypeHash(const UPresetControllerSubsystem) { return 0; }
