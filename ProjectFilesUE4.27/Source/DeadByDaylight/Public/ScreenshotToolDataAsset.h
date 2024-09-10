#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "ScreenshotViewSetting.h"
#include "NamedButton.h"
#include "GenderViewSetting.h"
#include "CharacterViewSetting.h"
#include "CharmViewSetting.h"
#include "CharacterItemCategoryViewSetting.h"
#include "ItemViewSetting.h"
#include "RoleGenderViewSetting.h"
#include "OutfitViewSetting.h"
#include "CharacterAnimation.h"
#include "CharmCategorySetting.h"
#include "ScreenshotToolDataAsset.generated.h"

UCLASS()
class UScreenshotToolDataAsset : public UDataAsset
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	FNamedButton ReloadDBButton;

	UPROPERTY(EditAnywhere)
	FScreenshotViewSetting SurvivorHeadView;

	UPROPERTY(EditAnywhere)
	FScreenshotViewSetting SurvivorTorsoView;

	UPROPERTY(EditAnywhere)
	FScreenshotViewSetting SurvivorLegsView;

	UPROPERTY(EditAnywhere)
	FScreenshotViewSetting KillerHeadView;

	UPROPERTY(EditAnywhere)
	FScreenshotViewSetting KillerBodyView;

	UPROPERTY(EditAnywhere)
	FScreenshotViewSetting KillerWeaponView;

	UPROPERTY(EditAnywhere)
	TArray<FGenderViewSetting> GenderViewOverrides;

	UPROPERTY(EditAnywhere)
	TArray<FCharacterItemCategoryViewSetting> CharacterViewOverrides;

	UPROPERTY(EditAnywhere)
	TArray<FItemViewSetting> ItemViewOverrides;

	UPROPERTY(EditAnywhere)
	TArray<FRoleGenderViewSetting> OutfitView;

	UPROPERTY(EditAnywhere)
	TArray<FCharacterViewSetting> OutfitCharacterOverrides;

	UPROPERTY(EditAnywhere)
	TArray<FRoleGenderViewSetting> OutfitTwoPartsView;

	UPROPERTY(EditAnywhere)
	TArray<FOutfitViewSetting> OutfitOverrides;

	UPROPERTY(EditAnywhere)
	TArray<FCharacterAnimation> AnimationOverrides;

	UPROPERTY(EditAnywhere)
	FScreenshotViewSetting CharmsView;

	UPROPERTY(EditAnywhere)
	TArray<FCharmCategorySetting> CharmsCategoryOverrides;

	UPROPERTY(EditAnywhere)
	TArray<FCharmViewSetting> CharmOverrides;

public:
	UScreenshotToolDataAsset();
};

FORCEINLINE uint32 GetTypeHash(const UScreenshotToolDataAsset) { return 0; }
