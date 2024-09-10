#pragma once

#include "CoreMinimal.h"
#include "DBDTableRowBase.h"
#include "UObject/SoftObjectPtr.h"
#include "UObject/NoExportTypes.h"
#include "VideoThumbnailProperties.generated.h"

class UMediaSource;

USTRUCT(BlueprintType)
struct FVideoThumbnailProperties: public FDBDTableRowBase
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadOnly, meta=(AllowPrivateAccess=true))
	FName _id;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, meta=(AllowPrivateAccess=true))
	bool _hasAudio;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, meta=(AllowPrivateAccess=true))
	FVector2D _size;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, meta=(AllowPrivateAccess=true))
	TSoftObjectPtr<UMediaSource> _source;

public:
	DEADBYDAYLIGHT_API FVideoThumbnailProperties();
};

FORCEINLINE uint32 GetTypeHash(const FVideoThumbnailProperties) { return 0; }
