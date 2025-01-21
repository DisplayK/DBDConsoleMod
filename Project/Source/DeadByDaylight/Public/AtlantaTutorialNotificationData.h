#pragma once

#include "CoreMinimal.h"
#include "UObject/SoftObjectPtr.h"
#include "TutorialNotificationData.h"
#include "AtlantaTutorialNotificationData.generated.h"

class UPaperSprite;

USTRUCT(BlueprintType)
struct FAtlantaTutorialNotificationData: public FTutorialNotificationData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<TSoftObjectPtr<UPaperSprite>> Textures;

public:
	DEADBYDAYLIGHT_API FAtlantaTutorialNotificationData();
};

FORCEINLINE uint32 GetTypeHash(const FAtlantaTutorialNotificationData) { return 0; }
