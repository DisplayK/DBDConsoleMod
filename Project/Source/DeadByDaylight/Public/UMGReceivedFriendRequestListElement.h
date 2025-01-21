#pragma once

#include "CoreMinimal.h"
#include "UMGBaseFriendListElement.h"
#include "UMGReceivedFriendRequestListElement.generated.h"

class URichTextBlock;

UCLASS(Abstract, EditInlineNew)
class UUMGReceivedFriendRequestListElement : public UUMGBaseFriendListElement
{
	GENERATED_BODY()

protected:
	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	URichTextBlock* FriendRequestStatusRichText;

public:
	UUMGReceivedFriendRequestListElement();
};

FORCEINLINE uint32 GetTypeHash(const UUMGReceivedFriendRequestListElement) { return 0; }
