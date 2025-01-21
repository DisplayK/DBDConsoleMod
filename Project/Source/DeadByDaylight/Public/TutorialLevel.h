#pragma once

#include "CoreMinimal.h"
#include "Engine/LevelScriptActor.h"
#include "ETutorialStep.h"
#include "TutorialLevel.generated.h"

UCLASS()
class DEADBYDAYLIGHT_API ATutorialLevel : public ALevelScriptActor
{
	GENERATED_BODY()

private:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, meta=(AllowPrivateAccess=true))
	bool _tutorialStarted;

public:
	UFUNCTION(BlueprintCallable)
	void StartTutorial();

	UFUNCTION(BlueprintCallable)
	void SetHandledTutorialStep(ETutorialStep tutorialStep);

	UFUNCTION(BlueprintCallable)
	void RemoveObjective(FName objectiveId);

protected:
	UFUNCTION()
	void OnTutorialStepUpdated(ETutorialStep tutorialStep);

	UFUNCTION()
	void OnNotificationDismissed(FName notificationId);

	UFUNCTION(BlueprintImplementableEvent)
	void HandleTutorialStepReached();

	UFUNCTION(BlueprintImplementableEvent)
	void HandleNotificationDismissed(FName notificationId);

public:
	UFUNCTION(BlueprintCallable)
	void DisplayNotification(FName notificationId, float time);

	UFUNCTION(BlueprintCallable)
	void DisplayBlockingNotification(FName notificationId);

	UFUNCTION(BlueprintCallable)
	void CompleteObjective(FName objectiveId);

	UFUNCTION(BlueprintCallable)
	void AddObjective(FName objectiveId);

public:
	ATutorialLevel();
};

FORCEINLINE uint32 GetTypeHash(const ATutorialLevel) { return 0; }
