#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "DBDObserverPlayer.generated.h"

class UDBDPlayerData;

UCLASS()
class ADBDObserverPlayer : public ACharacter
{
	GENERATED_BODY()

protected:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, meta=(BindWidgetOptional))
	UDBDPlayerData* _playerData;

public:
	UFUNCTION(Server, Reliable, WithValidation)
	void Server_PlayerReady();

public:
	ADBDObserverPlayer();
};

FORCEINLINE uint32 GetTypeHash(const ADBDObserverPlayer) { return 0; }
