#pragma once

#include "CoreMinimal.h"
#include "ScreenBase.h"
#include "InboxMessageUIData.h"
#include "InboxScreen.generated.h"

class UUMGInboxScreen;

UCLASS()
class UInboxScreen : public UScreenBase
{
	GENERATED_BODY()

private:
	UPROPERTY(Transient, Export)
	UUMGInboxScreen* _umgScreen;

	UPROPERTY(Transient)
	TArray<FInboxMessageUIData> _newsMessages;

	UPROPERTY(Transient)
	TArray<FInboxMessageUIData> _rewardsMessages;

	UPROPERTY(Transient)
	TArray<FInboxMessageUIData> _socialMessages;

public:
	UInboxScreen();
};

FORCEINLINE uint32 GetTypeHash(const UInboxScreen) { return 0; }
