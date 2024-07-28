#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "TutorialFunctionLibrary.generated.h"

class UTutorialNotificationController;
class UObject;
class ATutorialGameMode;
class UTutorialObjectiveController;
class ATutorialGameState;
class UTutorialHighlightController;

UCLASS(BlueprintType)
class UTutorialFunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintPure)
	static bool IsInTutorial(const UObject* WorldContextObject);

	UFUNCTION(BlueprintPure)
	static UTutorialObjectiveController* GetTutorialObjectiveController(UObject* WorldContextObject);

	UFUNCTION(BlueprintPure)
	static UTutorialNotificationController* GetTutorialNotificationController(UObject* WorldContextObject);

	UFUNCTION(BlueprintPure)
	static UTutorialHighlightController* GetTutorialHighlightController(UObject* WorldContextObject);

	UFUNCTION(BlueprintPure)
	static ATutorialGameState* GetTutorialGameState(UObject* WorldContextObject);

	UFUNCTION(BlueprintPure)
	static ATutorialGameMode* GetTutorialGameMode(UObject* WorldContextObject);

public:
	UTutorialFunctionLibrary();
};

FORCEINLINE uint32 GetTypeHash(const UTutorialFunctionLibrary) { return 0; }
