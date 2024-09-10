#pragma once

#include "CoreMinimal.h"
#include "WidgetFriendData.generated.h"

class UUMGBaseFriendListElement;

USTRUCT()
struct FWidgetFriendData
{
	GENERATED_BODY()

public:
	UPROPERTY(Export)
	UUMGBaseFriendListElement* correspondingWidget;

public:
	DEADBYDAYLIGHT_API FWidgetFriendData();
};

FORCEINLINE uint32 GetTypeHash(const FWidgetFriendData) { return 0; }
