#pragma once

#include "CoreMinimal.h"
#include "EAkAudioSessionCategory.generated.h"

UENUM(BlueprintType)
enum class EAkAudioSessionCategory : uint8
{
	Ambient,
	SoloAmbient,
	PlayAndRecord,
};
