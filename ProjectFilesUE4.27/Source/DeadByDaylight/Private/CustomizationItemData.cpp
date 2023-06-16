#include "CustomizationItemData.h"

FCustomizationItemData::FCustomizationItemData() {
    this->Category = ECustomizationCategory::None;
    this->PrestigeUlockLevel = 0;
    this->IsInStore = false;
    this->IsInNonViolentBuild = false;
    this->PlatformExclusiveFlag = 0;
}

