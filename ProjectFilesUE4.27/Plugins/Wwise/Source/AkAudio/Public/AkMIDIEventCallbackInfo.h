#pragma once

#include "CoreMinimal.h"
#include "AkEventCallbackInfo.h"
#include "AkMidiProgramChange.h"
#include "EAkMidiEventType.h"
#include "AkMidiGeneric.h"
#include "AkMidiNoteAftertouch.h"
#include "AkMidiPitchBend.h"
#include "AkMidiChannelAftertouch.h"
#include "AkMidiNoteOnOff.h"
#include "AkMidiCc.h"
#include "AkMIDIEventCallbackInfo.generated.h"

UCLASS()
class UAkMIDIEventCallbackInfo : public UAkEventCallbackInfo
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable)
	EAkMidiEventType GetType();

	UFUNCTION(BlueprintCallable)
	bool GetProgramChange(FAkMidiProgramChange& AsProgramChange);

	UFUNCTION(BlueprintCallable)
	bool GetPitchBend(FAkMidiPitchBend& AsPitchBend);

	UFUNCTION(BlueprintCallable)
	bool GetNoteOn(FAkMidiNoteOnOff& AsNoteOn);

	UFUNCTION(BlueprintCallable)
	bool GetNoteOff(FAkMidiNoteOnOff& AsNoteOff);

	UFUNCTION(BlueprintCallable)
	bool GetNoteAftertouch(FAkMidiNoteAftertouch& AsNoteAftertouch);

	UFUNCTION(BlueprintCallable)
	bool GetGeneric(FAkMidiGeneric& AsGeneric);

	UFUNCTION(BlueprintCallable)
	bool GetChannelAftertouch(FAkMidiChannelAftertouch& AsChannelAftertouch);

	UFUNCTION(BlueprintCallable)
	uint8 GetChannel();

	UFUNCTION(BlueprintCallable)
	bool GetCc(FAkMidiCc& AsCc);

public:
	UAkMIDIEventCallbackInfo();
};

FORCEINLINE uint32 GetTypeHash(const UAkMIDIEventCallbackInfo) { return 0; }
