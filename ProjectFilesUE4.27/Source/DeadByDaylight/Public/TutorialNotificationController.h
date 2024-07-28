#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "TutorialNotificationController.generated.h"

UCLASS(BlueprintType)
class UTutorialNotificationController : public UObject
{
	GENERATED_BODY()

public:
	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnBlockingNotificationDismissedEvent, FName, tutorialNotificationId);

public:
	UPROPERTY(BlueprintAssignable, Transient)
	FOnBlockingNotificationDismissedEvent OnBlockingNotificationDismissedEvent;

public:
	UFUNCTION(BlueprintCallable)
	void ShowNotification(FName tutorialNotificationId, float duration);

	UFUNCTION(BlueprintCallable)
	void ShowBlockingNotification(FName tutorialNotificationId);

private:
	UFUNCTION()
	void OnBlockingNotificationDismissed();

public:
	UFUNCTION(BlueprintCallable)
	void HideNotification(bool removeAllCachedNotifs);

public:
	UTutorialNotificationController();
};

FORCEINLINE uint32 GetTypeHash(const UTutorialNotificationController) { return 0; }
