#pragma once

#include "CoreMinimal.h"
#include "UObject/SoftObjectPtr.h"
#include "ECustomMatchOptions.h"
#include "MatchConfigTabData.generated.h"

class UUMGAtlantaMatchConfigTab;
class UPaperSprite;

USTRUCT()
struct FMatchConfigTabData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	TSoftClassPtr<UUMGAtlantaMatchConfigTab> Widget;

	UPROPERTY(EditAnywhere)
	TSoftObjectPtr<UPaperSprite> TabIcon;

	UPROPERTY(EditAnywhere)
	TMap<ECustomMatchOptions, int32> DefaultOptionsID;

public:
	DBDUIVIEWSMOBILE_API FMatchConfigTabData();
};

FORCEINLINE uint32 GetTypeHash(const FMatchConfigTabData) { return 0; }
