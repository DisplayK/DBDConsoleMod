#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "DBDInputManager.generated.h"

class UControlModeManager;
class UVirtualKeyboardManager;
class USwitchDockStateManager;
class UDataTable;

UCLASS()
class DBDINPUT_API UDBDInputManager : public UGameInstanceSubsystem
{
	GENERATED_BODY()

private:
	UPROPERTY(Transient)
	UControlModeManager* _controlModeManager;

	UPROPERTY(Transient)
	USwitchDockStateManager* _switchDockStateManager;

	UPROPERTY(Transient)
	UVirtualKeyboardManager* _virtualKeyboardManager;

	UPROPERTY(Transient)
	UDataTable* _analogCursorDb;

public:
	UDBDInputManager();
};

FORCEINLINE uint32 GetTypeHash(const UDBDInputManager) { return 0; }
