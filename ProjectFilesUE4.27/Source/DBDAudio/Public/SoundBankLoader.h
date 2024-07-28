#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "SoundBankLoader.generated.h"

class ULoadAsyncBankData;
class UAkAudioBank;

UCLASS()
class DBDAUDIO_API USoundBankLoader : public UGameInstanceSubsystem
{
	GENERATED_BODY()

private:
	UPROPERTY(Transient)
	TArray<UAkAudioBank*> _audioBanks;

	UPROPERTY(Transient)
	TArray<ULoadAsyncBankData*> _asyncAudioBanksPendingLoadData;

public:
	USoundBankLoader();
};

FORCEINLINE uint32 GetTypeHash(const USoundBankLoader) { return 0; }
