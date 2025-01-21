#pragma once

#include "CoreMinimal.h"
#include "DBDTableRowBase.h"
#include "UObject/SoftObjectPtr.h"
#include "EAtlantaFriendUIStatus.h"
#include "FriendStatusUIData.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FFriendStatusUIData: public FDBDTableRowBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EAtlantaFriendUIStatus FriendStatus;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftObjectPtr<UTexture2D> StatusIcon;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText StatusText;

public:
	DBDUIVIEWSMOBILE_API FFriendStatusUIData();
};

FORCEINLINE uint32 GetTypeHash(const FFriendStatusUIData) { return 0; }
