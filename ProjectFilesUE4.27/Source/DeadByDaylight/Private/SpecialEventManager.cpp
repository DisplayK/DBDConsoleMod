#include "SpecialEventManager.h"
#include "SpecialEventsContainer.h"
#include "UObject/NoExportTypes.h"
#include "ESpecialEventStatus.h"
#include "CombinedSpecialEventData.h"

class UObject;

FTimespan USpecialEventManager::GetTimeTillPostEndDate(const FCombinedSpecialEventData& specialEventData)
{
	return FTimespan{};
}

FTimespan USpecialEventManager::GetTimeTillMainEndDate(const FCombinedSpecialEventData& specialEventData)
{
	return FTimespan{};
}

FTimespan USpecialEventManager::GetTimeSinceStartDate(const FCombinedSpecialEventData& specialEventData)
{
	return FTimespan{};
}

ESpecialEventStatus USpecialEventManager::GetStatus(const FCombinedSpecialEventData& specialEventData)
{
	return ESpecialEventStatus::Inactive;
}

FDateTime USpecialEventManager::GetStartDate(const FCombinedSpecialEventData& specialEventData)
{
	return FDateTime{};
}

bool USpecialEventManager::GetSpecialEvent(UObject* worldContextObject, const FName eventId, FCombinedSpecialEventData& outSpecialEventData)
{
	return false;
}

FDateTime USpecialEventManager::GetPostEndDate(const FCombinedSpecialEventData& specialEventData)
{
	return FDateTime{};
}

FDateTime USpecialEventManager::GetMainEndDate(const FCombinedSpecialEventData& specialEventData)
{
	return FDateTime{};
}

bool USpecialEventManager::GetEventTimeTillPostEndDate(const FString& eventId, FTimespan& outDate)
{
	return false;
}

bool USpecialEventManager::GetEventTimeTillMainEndDate(const FString& eventId, FTimespan& outDate)
{
	return false;
}

bool USpecialEventManager::GetEventTimeSinceStartDate(const FString& eventId, FTimespan& outDate)
{
	return false;
}

bool USpecialEventManager::GetEventStartDate(const FString& eventId, FDateTime& outDate)
{
	return false;
}

bool USpecialEventManager::GetEventPostEndDate(const FString& eventId, FDateTime& outDate)
{
	return false;
}

bool USpecialEventManager::GetEventMainEndDate(const FString& eventId, FDateTime& outDate)
{
	return false;
}

bool USpecialEventManager::GetCurrentSpecialEvent(const UObject* worldContextObject, FCombinedSpecialEventData& outSpecialEventData)
{
	return false;
}

bool USpecialEventManager::GetCurrentMainSpecialEvent(const UObject* worldContextObject, FCombinedSpecialEventData& outSpecialEventData)
{
	return false;
}

USpecialEventManager::USpecialEventManager()
{
	this->_specialEventsContainer = CreateDefaultSubobject<USpecialEventsContainer>(TEXT("SpecialEventContainer"));
}
