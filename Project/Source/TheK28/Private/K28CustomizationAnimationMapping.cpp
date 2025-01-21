#include "K28CustomizationAnimationMapping.h"

FK28CustomizationAnimationMapping::FK28CustomizationAnimationMapping()
{
	this->ID = 0;
	this->AnimTags = TArray<FName>();
	this->_mappingInfos = TArray<FK28AnimationMappingInfo>();
}
