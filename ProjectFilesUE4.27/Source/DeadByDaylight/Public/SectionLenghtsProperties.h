#pragma once

#include "CoreMinimal.h"
#include "EDirection.h"
#include "SectionLenghtsProperties.generated.h"

USTRUCT(BlueprintType)
struct FSectionLenghtsProperties
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EDirection Direction;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Length;

public:
	DEADBYDAYLIGHT_API FSectionLenghtsProperties();
};

FORCEINLINE uint32 GetTypeHash(const FSectionLenghtsProperties) { return 0; }
