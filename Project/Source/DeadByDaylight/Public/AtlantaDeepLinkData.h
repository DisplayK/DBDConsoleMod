#pragma once

#include "CoreMinimal.h"
#include "DBDTableRowBase.h"
#include "EDeepLinkUid.h"
#include "AtlantaDeepLinkData.generated.h"

USTRUCT(BlueprintType)
struct FAtlantaDeepLinkData: public FDBDTableRowBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString Url;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EDeepLinkUid DeepLink;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool HasCustomParameters;

public:
	DEADBYDAYLIGHT_API FAtlantaDeepLinkData();
};

FORCEINLINE uint32 GetTypeHash(const FAtlantaDeepLinkData) { return 0; }
