#pragma once

#include "CoreMinimal.h"
#include "Perk.h"
#include "Templates/SubclassOf.h"
#include "BiteTheBullet.generated.h"

class UBiteTheBulletEffect;
class ADBDPlayer;

UCLASS(meta=(BlueprintSpawnableComponent))
class UBiteTheBullet : public UPerk
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UBiteTheBulletEffect> _effectClass;

	UPROPERTY(Transient)
	ADBDPlayer* _server_healTarget;

public:
	UBiteTheBullet();
};

FORCEINLINE uint32 GetTypeHash(const UBiteTheBullet) { return 0; }
