#pragma once

#include "CoreMinimal.h"
#include "EAkCommSystem.h"
#include "AkCommunicationSettings.h"
#include "AkCommunicationSettingsWithCommSelection.generated.h"

USTRUCT()
struct FAkCommunicationSettingsWithCommSelection: public FAkCommunicationSettings
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	EAkCommSystem CommunicationSystem;

public:
	AKAUDIO_API FAkCommunicationSettingsWithCommSelection();
};

FORCEINLINE uint32 GetTypeHash(const FAkCommunicationSettingsWithCommSelection) { return 0; }
