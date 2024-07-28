#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AkAudioType.generated.h"

UCLASS()
class AKAUDIO_API UAkAudioType : public UObject
{
	GENERATED_BODY()

public:
	UPROPERTY(VisibleAnywhere, AssetRegistrySearchable)
	uint32 ShortID;

	UPROPERTY(EditAnywhere)
	TArray<UObject*> UserData;

public:
	UAkAudioType();
};

FORCEINLINE uint32 GetTypeHash(const UAkAudioType) { return 0; }
