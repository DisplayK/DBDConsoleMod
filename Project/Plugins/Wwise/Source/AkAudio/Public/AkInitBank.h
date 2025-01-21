#pragma once

#include "CoreMinimal.h"
#include "AkAssetBase.h"
#include "AkInitBank.generated.h"

UCLASS()
class AKAUDIO_API UAkInitBank : public UAkAssetBase
{
	GENERATED_BODY()

public:
	UPROPERTY(VisibleAnywhere)
	TArray<FString> AvailableAudioCultures;

	UPROPERTY(VisibleAnywhere)
	FString DefaultLanguage;

public:
	UAkInitBank();
};

FORCEINLINE uint32 GetTypeHash(const UAkInitBank) { return 0; }
