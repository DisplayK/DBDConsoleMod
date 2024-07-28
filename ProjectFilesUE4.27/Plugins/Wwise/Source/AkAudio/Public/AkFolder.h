#pragma once

#include "CoreMinimal.h"
#include "AkAudioType.h"
#include "AkFolder.generated.h"

UCLASS()
class AKAUDIO_API UAkFolder : public UAkAudioType
{
	GENERATED_BODY()

public:
	UPROPERTY(VisibleAnywhere)
	FString UnrealFolderPath;

	UPROPERTY(VisibleAnywhere)
	FString WwiseFolderPath;

public:
	UAkFolder();
};

FORCEINLINE uint32 GetTypeHash(const UAkFolder) { return 0; }
