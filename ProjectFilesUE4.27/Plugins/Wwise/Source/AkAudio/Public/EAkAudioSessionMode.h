#pragma once

#include "CoreMinimal.h"
#include "EAkAudioSessionMode.generated.h"

UENUM(BlueprintType)
enum class EAkAudioSessionMode : uint8
{
	Default,
	VoiceChat,
	GameChat,
	VideoRecording,
	Measurement,
	MoviePlayback,
	VideoChat,
};
