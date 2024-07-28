#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PropertyParser.generated.h"

class UActorComponent;

UCLASS(BlueprintType)
class COREUTILITIES_API UPropertyParser : public UObject
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable)
	static void CopyProperties(UActorComponent* dest, const UActorComponent* origin, bool copyTransform, TArray<FName> propertiesToExclude);

public:
	UPropertyParser();
};

FORCEINLINE uint32 GetTypeHash(const UPropertyParser) { return 0; }
