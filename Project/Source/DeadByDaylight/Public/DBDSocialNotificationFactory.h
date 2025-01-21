#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "DBDSocialNotificationFactory.generated.h"

class UToastManager;
class UDataTable;
class UFriendManager;
class UDBDGameInstance;
class UDBDPartyFacade;

UCLASS()
class UDBDSocialNotificationFactory : public UObject
{
	GENERATED_BODY()

protected:
	UPROPERTY(Transient)
	TWeakObjectPtr<UDBDGameInstance> _gameInstance;

	UPROPERTY(Transient)
	UToastManager* _toastMgr;

	UPROPERTY(Transient)
	UDBDPartyFacade* _partyFacade;

	UPROPERTY(Transient)
	UFriendManager* _friendManager;

	UPROPERTY(Transient)
	UDataTable* _toastTable;

public:
	UDBDSocialNotificationFactory();
};

FORCEINLINE uint32 GetTypeHash(const UDBDSocialNotificationFactory) { return 0; }
