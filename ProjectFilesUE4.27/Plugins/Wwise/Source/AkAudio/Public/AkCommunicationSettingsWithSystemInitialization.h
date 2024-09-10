#pragma once

#include "CoreMinimal.h"
#include "AkCommunicationSettings.h"
#include "AkCommunicationSettingsWithSystemInitialization.generated.h"

USTRUCT()
struct FAkCommunicationSettingsWithSystemInitialization: public FAkCommunicationSettings
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	bool InitializeSystemComms;

public:
	AKAUDIO_API FAkCommunicationSettingsWithSystemInitialization();
};

FORCEINLINE uint32 GetTypeHash(const FAkCommunicationSettingsWithSystemInitialization) { return 0; }
