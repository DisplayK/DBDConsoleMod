#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/SoftObjectPtr.h"
#include "EItemRarity.h"
#include "MenuLoadoutPartViewData.generated.h"

class UTexture2D;

UCLASS(BlueprintType)
class DBDUIVIEWINTERFACES_API UMenuLoadoutPartViewData : public UObject
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FName ItemId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	TSoftObjectPtr<UTexture2D> IconTexture;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	EItemRarity Rarity;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	int32 StackCount;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
	bool IsLocked;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
	bool IsSelected;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
	bool IsKillSwitchEnabled;

public:
	UMenuLoadoutPartViewData();
};

FORCEINLINE uint32 GetTypeHash(const UMenuLoadoutPartViewData) { return 0; }
