#pragma once

#include "CoreMinimal.h"
#include "CombinedSpecialEventData.h"
#include "ESpecialEventStatus.h"
#include "UObject/NoExportTypes.h"
#include "SpecialEventManager.generated.h"

class USpecialEventsContainer;

UCLASS(BlueprintType)
class DEADBYDAYLIGHT_API USpecialEventManager : public UObject
{
	GENERATED_BODY()

private:
	UPROPERTY(Transient)
	USpecialEventsContainer* _specialEventsContainer;

public:
	UFUNCTION(BlueprintPure)
	static FTimespan GetTimeTillPostEndDate(const FCombinedSpecialEventData& specialEventData);

	UFUNCTION(BlueprintPure)
	static FTimespan GetTimeTillMainEndDate(const FCombinedSpecialEventData& specialEventData);

	UFUNCTION(BlueprintPure)
	static FTimespan GetTimeSinceStartDate(const FCombinedSpecialEventData& specialEventData);

	UFUNCTION(BlueprintPure)
	static ESpecialEventStatus GetStatus(const FCombinedSpecialEventData& specialEventData);

	UFUNCTION(BlueprintPure)
	static FDateTime GetStartDate(const FCombinedSpecialEventData& specialEventData);

	UFUNCTION(BlueprintPure)
	static bool GetSpecialEvent(UObject* worldContextObject, const FName eventId, FCombinedSpecialEventData& outSpecialEventData);

	UFUNCTION(BlueprintPure)
	static FDateTime GetPostEndDate(const FCombinedSpecialEventData& specialEventData);

	UFUNCTION(BlueprintPure)
	static FDateTime GetMainEndDate(const FCombinedSpecialEventData& specialEventData);

	UFUNCTION(BlueprintPure)
	static bool GetEventTimeTillPostEndDate(const FString& eventId, FTimespan& outDate);

	UFUNCTION(BlueprintPure)
	static bool GetEventTimeTillMainEndDate(const FString& eventId, FTimespan& outDate);

	UFUNCTION(BlueprintPure)
	static bool GetEventTimeSinceStartDate(const FString& eventId, FTimespan& outDate);

	UFUNCTION(BlueprintPure)
	static bool GetEventStartDate(const FString& eventId, FDateTime& outDate);

	UFUNCTION(BlueprintPure)
	static bool GetEventPostEndDate(const FString& eventId, FDateTime& outDate);

	UFUNCTION(BlueprintPure)
	static bool GetEventMainEndDate(const FString& eventId, FDateTime& outDate);

	UFUNCTION(BlueprintPure)
	static bool GetCurrentSpecialEvent(const UObject* worldContextObject, FCombinedSpecialEventData& outSpecialEventData);

	UFUNCTION(BlueprintPure)
	static bool GetCurrentMainSpecialEvent(const UObject* worldContextObject, FCombinedSpecialEventData& outSpecialEventData);

public:
	USpecialEventManager();
};

FORCEINLINE uint32 GetTypeHash(const USpecialEventManager) { return 0; }
