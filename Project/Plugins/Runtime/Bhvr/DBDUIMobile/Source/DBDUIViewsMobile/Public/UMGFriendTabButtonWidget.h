#pragma once

#include "CoreMinimal.h"
#include "UMGBaseTabButtonWidget.h"
#include "UMGFriendTabButtonWidget.generated.h"

UCLASS(Abstract, EditInlineNew)
class DBDUIVIEWSMOBILE_API UUMGFriendTabButtonWidget : public UUMGBaseTabButtonWidget
{
	GENERATED_BODY()

public:
	UUMGFriendTabButtonWidget();
};

FORCEINLINE uint32 GetTypeHash(const UUMGFriendTabButtonWidget) { return 0; }
