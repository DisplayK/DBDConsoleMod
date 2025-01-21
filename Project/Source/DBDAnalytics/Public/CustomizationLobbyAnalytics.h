#pragma once

#include "CoreMinimal.h"
#include "CustomizationBaseAnalytics.h"
#include "CustomizationLobbyAnalytics.generated.h"

USTRUCT()
struct FCustomizationLobbyAnalytics: public FCustomizationBaseAnalytics
{
	GENERATED_BODY()

public:
	UPROPERTY()
	FString LobbyId;

public:
	DBDANALYTICS_API FCustomizationLobbyAnalytics();
};

FORCEINLINE uint32 GetTypeHash(const FCustomizationLobbyAnalytics) { return 0; }
