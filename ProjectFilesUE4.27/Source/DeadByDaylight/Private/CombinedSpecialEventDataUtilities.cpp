#include "CombinedSpecialEventDataUtilities.h"
#include "CombinedSpecialEventData.h"
#include "UObject/NoExportTypes.h"

FName UCombinedSpecialEventDataUtilities::GetSpecialMusicState(const FCombinedSpecialEventData& data)
{
	return NAME_None;
}

FColor UCombinedSpecialEventDataUtilities::GetObjectOutlineColour(const FCombinedSpecialEventData& data)
{
	return FColor{};
}

UCombinedSpecialEventDataUtilities::UCombinedSpecialEventDataUtilities()
{

}
