#pragma once

#include "CoreMinimal.h"
#include "Components/BoxComponent.h"
#include "AmbienceBoxComponent.generated.h"

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class DBDAUDIO_API UAmbienceBoxComponent : public UBoxComponent
{
	GENERATED_BODY()

public:
	UAmbienceBoxComponent();
};

FORCEINLINE uint32 GetTypeHash(const UAmbienceBoxComponent) { return 0; }
