#pragma once

#include "CoreMinimal.h"
#include "DBDTableRowBase.h"
#include "UObject/SoftObjectPtr.h"
#include "SubtitlesDescription.generated.h"

class UAkAudioEvent;

USTRUCT()
struct FSubtitlesDescription: public FDBDTableRowBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	FText SubtitlesText;

	UPROPERTY(EditAnywhere)
	TSoftObjectPtr<UAkAudioEvent> AudioEvent;

public:
	DEADBYDAYLIGHT_API FSubtitlesDescription();
};

FORCEINLINE uint32 GetTypeHash(const FSubtitlesDescription) { return 0; }
