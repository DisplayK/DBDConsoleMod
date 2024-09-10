#pragma once

#include "CoreMinimal.h"
#include "CustomWidgetWrapper.h"
#include "CustomWidgetWrapper_InGame.generated.h"

UCLASS()
class DEADBYDAYLIGHT_API UCustomWidgetWrapper_InGame : public UCustomWidgetWrapper
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	int32 VirtualJoystickIndex;

public:
	UFUNCTION()
	void UpdateSettings();

public:
	UCustomWidgetWrapper_InGame();
};

FORCEINLINE uint32 GetTypeHash(const UCustomWidgetWrapper_InGame) { return 0; }
