#pragma once

#include "CoreMinimal.h"
#include "UMGBaseFriendListContextualMenuWidget.h"
#include "UMGFriendContextualMenuWidget.generated.h"

UCLASS(Abstract, EditInlineNew)
class UUMGFriendContextualMenuWidget : public UUMGBaseFriendListContextualMenuWidget
{
	GENERATED_BODY()

public:
	UUMGFriendContextualMenuWidget();
};

FORCEINLINE uint32 GetTypeHash(const UUMGFriendContextualMenuWidget) { return 0; }
