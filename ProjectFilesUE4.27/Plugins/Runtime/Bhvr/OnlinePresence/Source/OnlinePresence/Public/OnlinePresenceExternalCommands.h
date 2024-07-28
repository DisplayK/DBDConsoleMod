#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "OnlinePresenceExternalCommands.generated.h"

UCLASS()
class ONLINEPRESENCE_API UOnlinePresenceExternalCommands : public UObject
{
	GENERATED_BODY()

public:
	UFUNCTION(Exec)
	void DBD_MirrorsWalletWithdraw(const FString& currencyName, int32 value);

	UFUNCTION(Exec)
	void DBD_MirrorsWalletGetCurrency(const FString& currencyName);

	UFUNCTION(Exec)
	void DBD_MirrorsSaveTestValue(const FString& stateName, int32 version);

	UFUNCTION(Exec)
	void DBD_MirrorsGetValue(const FString& stateName);

	UFUNCTION(Exec)
	bool DBD_IsDlcInstalled(const FString& inString);

	UFUNCTION(Exec)
	bool DBD_GrantPromoItems();

	UFUNCTION(Exec)
	bool DBD_GenerateTestItems();

public:
	UOnlinePresenceExternalCommands();
};

FORCEINLINE uint32 GetTypeHash(const UOnlinePresenceExternalCommands) { return 0; }
