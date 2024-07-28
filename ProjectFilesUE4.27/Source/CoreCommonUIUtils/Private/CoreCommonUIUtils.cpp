#include "CoreCommonUIUtils.h"

class UObject;

bool UCoreCommonUIUtils::HasOuter(const UObject* object, UObject* root)
{
	return false;
}

float UCoreCommonUIUtils::GetDPIScale()
{
	return 0.0f;
}

FText UCoreCommonUIUtils::GetBeautifiedNumericText(const int32 value)
{
	return FText::GetEmpty();
}

FString UCoreCommonUIUtils::GetBeautifiedNumericString(const int32 value)
{
	return TEXT("");
}

FString UCoreCommonUIUtils::BeautifyName(const FString& name, int32 maxCharacters)
{
	return TEXT("");
}

UCoreCommonUIUtils::UCoreCommonUIUtils()
{

}
