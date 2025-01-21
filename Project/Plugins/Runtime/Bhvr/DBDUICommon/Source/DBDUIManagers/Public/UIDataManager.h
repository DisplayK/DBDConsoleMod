#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "Styling/SlateTypes.h"
#include "EItemRarity.h"
#include "ArchiveTomeSkinData.h"
#include "EProgressionType.h"
#include "CurrencyProgressionUIData.h"
#include "RarityMaterialData.h"
#include "ECurrencyType.h"
#include "EArchiveMenuState.h"
#include "UIDataManager.generated.h"

UCLASS()
class DBDUIMANAGERS_API UUIDataManager : public UGameInstanceSubsystem
{
	GENERATED_BODY()

public:
	UPROPERTY(Transient)
	TMap<EItemRarity, FRarityMaterialData> RarityMaterialMap;

	UPROPERTY(Transient)
	TMap<FString, FTextBlockStyle> RichTextStyleMap;

	UPROPERTY(Transient)
	TMap<ECurrencyType, FCurrencyProgressionUIData> CurrencyUIDataMap;

	UPROPERTY(Transient)
	TMap<EProgressionType, FCurrencyProgressionUIData> ProgressionUIDataMap;

	UPROPERTY(Transient)
	TMap<EArchiveMenuState, FArchiveTomeSkinData> ArchiveTomeSkinDataMap;

public:
	UUIDataManager();
};

FORCEINLINE uint32 GetTypeHash(const UUIDataManager) { return 0; }
