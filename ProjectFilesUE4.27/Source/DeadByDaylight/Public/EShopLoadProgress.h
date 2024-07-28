#pragma once

#include "CoreMinimal.h"
#include "EShopLoadProgress.generated.h"

UENUM(BlueprintType)
enum class EShopLoadProgress : uint8
{
	None,
	LoadCatalog,
	LoadCurrencyPacks,
	PlatformStoreCatalog,
	Inventory,
	Wallet,
	FeaturedPageContent,
};
