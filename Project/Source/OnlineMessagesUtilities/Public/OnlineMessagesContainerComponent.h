#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "InboxMessageData.h"
#include "OnlineMessagesContainerComponent.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class ONLINEMESSAGESUTILITIES_API UOnlineMessagesContainerComponent : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(Transient)
	TArray<FInboxMessageData> _messages;

public:
	UOnlineMessagesContainerComponent();
};

FORCEINLINE uint32 GetTypeHash(const UOnlineMessagesContainerComponent) { return 0; }
