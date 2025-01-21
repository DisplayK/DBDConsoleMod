#include "SourceBasedOutlineUpdateStrategy.h"
#include "UObject/NoExportTypes.h"
#include "RevealOptions.h"

class ADBDPlayer;
class UObject;
class AActor;

void USourceBasedOutlineUpdateStrategy::ResetReveal()
{

}

void USourceBasedOutlineUpdateStrategy::RemoveRevealSource(const UObject* source)
{

}

void USourceBasedOutlineUpdateStrategy::ChangeDefaultColorForSurvivor(const FLinearColor newColor)
{

}

void USourceBasedOutlineUpdateStrategy::ChangeDefaultColorForSlasher(const FLinearColor newColor)
{

}

void USourceBasedOutlineUpdateStrategy::AddTimedReveal(const UObject* source, const FLinearColor highlightColor, int32 priority, const TArray<ADBDPlayer*>& affectedCharacters, float duration)
{

}

void USourceBasedOutlineUpdateStrategy::AddTimedAndRangedReveal(const UObject* source, const AActor* sourceActor, const FLinearColor highlightColor, int32 priority, const TArray<ADBDPlayer*>& affectedCharacters, float duration, float range)
{

}

void USourceBasedOutlineUpdateStrategy::AddRevealWithOptions(const UObject* source, const FLinearColor highlightColor, int32 priority, const TArray<ADBDPlayer*>& affectedCharacters, FRevealOptions options)
{

}

void USourceBasedOutlineUpdateStrategy::AddReveal(const UObject* source, const FLinearColor highlightColor, int32 priority, const TArray<ADBDPlayer*>& affectedCharacters)
{

}

void USourceBasedOutlineUpdateStrategy::AddRangedReveal(const UObject* source, const AActor* sourceActor, const FLinearColor highlightColor, int32 priority, const TArray<ADBDPlayer*>& affectedCharacters, float range)
{

}

USourceBasedOutlineUpdateStrategy::USourceBasedOutlineUpdateStrategy()
{

}
