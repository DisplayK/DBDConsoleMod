#pragma once

#include "CoreMinimal.h"
#include "LoginJsonMessage.generated.h"

USTRUCT()
struct FLoginJsonMessage
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	FString LoginJson;

	UPROPERTY(EditAnywhere)
	FString LoginType;

	UPROPERTY(EditAnywhere)
	FString RoleID;

	UPROPERTY(EditAnywhere)
	bool IsNewAccount;

public:
	GENERICGAMEMESSAGES_API FLoginJsonMessage();
};

FORCEINLINE uint32 GetTypeHash(const FLoginJsonMessage) { return 0; }
