#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "LoadAsyncBankData.generated.h"

class USoundBankLoader;
class UAkAudioBank;

UCLASS()
class DBDAUDIO_API ULoadAsyncBankData : public UObject
{
	GENERATED_BODY()

public:
	UPROPERTY(Transient)
	UAkAudioBank* Bank;

	UPROPERTY(Transient)
	USoundBankLoader* SoundBankLoader;

public:
	ULoadAsyncBankData();
};

FORCEINLINE uint32 GetTypeHash(const ULoadAsyncBankData) { return 0; }
