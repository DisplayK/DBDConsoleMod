#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "StatusViewSource.h"
#include "StatusView.generated.h"

class ADBDPlayer;

UCLASS()
class AStatusView : public AActor
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IsActive;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Level;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float PercentageFill;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	bool IsClockwiseTimer;

private:
	UPROPERTY(Transient)
	ADBDPlayer* _localDBDPlayer;

public:
	UFUNCTION(BlueprintNativeEvent)
	void ResetView(const ADBDPlayer* dbdPlayer);

	UFUNCTION(BlueprintCallable)
	void FireNotification(const FStatusViewSource statusViewSource);

public:
	AStatusView();
};

FORCEINLINE uint32 GetTypeHash(const AStatusView) { return 0; }
