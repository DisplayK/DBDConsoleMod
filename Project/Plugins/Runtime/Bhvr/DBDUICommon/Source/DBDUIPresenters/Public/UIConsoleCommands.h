#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UIConsoleCommands.generated.h"

UCLASS()
class UUIConsoleCommands : public UObject
{
	GENERATED_BODY()

public:
	UFUNCTION(Exec)
	void DBD_ToggleTestWidget();

	UFUNCTION(Exec)
	void DBD_ToggleDPICurve();

	UFUNCTION(Exec)
	void DBD_ShowPresenterDebugInfo(int32 presenterDebugMode);

	UFUNCTION(Exec)
	void DBD_SetUMGVisible(bool isVisible);

	UFUNCTION(Exec)
	void DBD_SetMenuScaleFactor(float scaleFactor);

	UFUNCTION(Exec)
	void DBD_SetHudVisible(bool isVisible);

	UFUNCTION(Exec)
	void DBD_SetHudScaleFactor(float scaleFactor);

	UFUNCTION(Exec)
	void DBD_SetApplicationScale(float applicationScale);

	UFUNCTION(Exec)
	void DBD_ResetPresenters();

public:
	UUIConsoleCommands();
};

FORCEINLINE uint32 GetTypeHash(const UUIConsoleCommands) { return 0; }
