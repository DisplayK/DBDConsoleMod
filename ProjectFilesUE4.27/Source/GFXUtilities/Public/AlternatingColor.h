#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AlternatingColor.generated.h"

UCLASS()
class UAlternatingColor : public UObject
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	FLinearColor FirstColor;

	UPROPERTY(EditDefaultsOnly)
	FLinearColor SecondColor;

	UPROPERTY(EditDefaultsOnly)
	float ColorChangePeriod;

public:
	UAlternatingColor();
};

FORCEINLINE uint32 GetTypeHash(const UAlternatingColor) { return 0; }
