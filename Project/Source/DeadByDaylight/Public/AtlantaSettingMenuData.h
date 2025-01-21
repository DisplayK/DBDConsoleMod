#pragma once

#include "CoreMinimal.h"
#include "DBDTableRowBase.h"
#include "EAtlantaSettingMenuType.h"
#include "EOverlayTabs.h"
#include "EOverlayMode.h"
#include "AtlantaSettingMenuData.generated.h"

USTRUCT()
struct FAtlantaSettingMenuData: public FDBDTableRowBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	EOverlayTabs OverlayTab;

	UPROPERTY(EditAnywhere)
	EOverlayMode OverlayMode;

	UPROPERTY(EditAnywhere)
	FText DisplayName;

	UPROPERTY(EditAnywhere)
	EAtlantaSettingMenuType MenuType;

public:
	DEADBYDAYLIGHT_API FAtlantaSettingMenuData();
};

FORCEINLINE uint32 GetTypeHash(const FAtlantaSettingMenuData) { return 0; }
