#include "DBDOutlineComponentConfiguration.h"

UDBDOutlineComponentConfiguration::UDBDOutlineComponentConfiguration()
{
	this->OutlineConfigs = TMap<TSoftClassPtr<UObject>, FOutlineConfig>();
	this->OutlineColours = TMap<FName, FOutlineColourConfiguration>();
	this->TranslucencyDefaultMaterials = TArray<TSoftObjectPtr<UMaterialInterface>>();
}
