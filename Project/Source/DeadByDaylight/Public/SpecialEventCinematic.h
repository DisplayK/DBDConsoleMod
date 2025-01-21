#pragma once

#include "CoreMinimal.h"
#include "UObject/SoftObjectPtr.h"
#include "SpecialEventCinematic.generated.h"

class UMediaSource;

USTRUCT(BlueprintType)
struct FSpecialEventCinematic
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	bool IsSkippable;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	bool HasAudio;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TSoftObjectPtr<UMediaSource> Media;

public:
	DEADBYDAYLIGHT_API FSpecialEventCinematic();
};

FORCEINLINE uint32 GetTypeHash(const FSpecialEventCinematic) { return 0; }
