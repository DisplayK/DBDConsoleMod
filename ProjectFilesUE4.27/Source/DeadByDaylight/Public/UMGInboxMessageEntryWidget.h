#pragma once

#include "CoreMinimal.h"
#include "InboxMessageUIData.h"
#include "Blueprint/UserWidget.h"
#include "InboxMessageElapsedTime.h"
#include "UMGInboxMessageEntryWidget.generated.h"

UCLASS(EditInlineNew)
class DEADBYDAYLIGHT_API UUMGInboxMessageEntryWidget : public UUserWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadWrite)
	FInboxMessageUIData _messageData;

	UPROPERTY(BlueprintReadWrite)
	bool _isCurrentSelection;

protected:
	UFUNCTION(BlueprintNativeEvent)
	void UpdateMessageData(FInboxMessageUIData messageData);

public:
	UFUNCTION(BlueprintCallable)
	void SetMessageData(const FInboxMessageUIData& messageData);

	UFUNCTION(BlueprintCallable)
	FInboxMessageElapsedTime GetElapsedTime();

public:
	UUMGInboxMessageEntryWidget();
};

FORCEINLINE uint32 GetTypeHash(const UUMGInboxMessageEntryWidget) { return 0; }
