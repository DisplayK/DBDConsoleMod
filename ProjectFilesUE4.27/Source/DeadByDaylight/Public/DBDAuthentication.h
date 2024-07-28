#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AuthenticationInfo.h"
#include "DBDAuthentication.generated.h"

class UDBDGameInstance;

UCLASS()
class UDBDAuthentication : public UObject
{
	GENERATED_BODY()

private:
	UPROPERTY(Transient)
	TArray<FAuthenticationInfo> _localInfos;

	UPROPERTY(Transient)
	TArray<FAuthenticationInfo> _remoteInfos;

	UPROPERTY(Transient)
	UDBDGameInstance* _gameInstance;

public:
	UDBDAuthentication();
};

FORCEINLINE uint32 GetTypeHash(const UDBDAuthentication) { return 0; }
