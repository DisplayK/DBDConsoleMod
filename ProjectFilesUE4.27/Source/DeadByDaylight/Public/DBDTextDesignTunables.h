#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "DBDTextDesignTunables.generated.h"

UCLASS(BlueprintType, Transient)
class DEADBYDAYLIGHT_API UDBDTextDesignTunables : public UObject
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText LegalTextTitle;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText LegalText;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText ConsentTextTitle;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText ConsentText;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText LegalTextSIEA;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText LegalTextSIEE;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText SystemMessage_ChatDisconnected;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText SystemMessage_ChatReturnedToLobby;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText SystemMessage_ChatMatchServerClosed;

public:
	UDBDTextDesignTunables();
};

FORCEINLINE uint32 GetTypeHash(const UDBDTextDesignTunables) { return 0; }
