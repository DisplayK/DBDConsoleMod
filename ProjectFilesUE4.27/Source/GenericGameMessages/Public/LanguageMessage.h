#pragma once

#include "CoreMinimal.h"
#include "LanguageMessage.generated.h"

USTRUCT()
struct FLanguageMessage
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	FString Language;

public:
	GENERICGAMEMESSAGES_API FLanguageMessage();
};

FORCEINLINE uint32 GetTypeHash(const FLanguageMessage) { return 0; }
