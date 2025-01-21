#pragma once

#include "CoreMinimal.h"
#include "UObject/SoftObjectPtr.h"
#include "Components/Image.h"
#include "OnImageStreamingCompleted.h"
#include "OnImageStreamingCancelled.h"
#include "OnImageStreamingStarted.h"
#include "DBDImage.generated.h"

class UTexture2D;

UCLASS()
class UDBDImage : public UImage
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UTexture2D* DefaultImage;

	UPROPERTY(BlueprintAssignable)
	FOnImageStreamingCancelled _onImageStreamingCancelled;

	UPROPERTY(BlueprintAssignable)
	FOnImageStreamingStarted _onImageStreamingStarted;

	UPROPERTY(BlueprintAssignable)
	FOnImageStreamingCompleted _onImageStreamingCompleted;

public:
	UFUNCTION(BlueprintCallable)
	void SetBrushFromTextureWithDefault(UTexture2D* texture, bool matchSize);

	UFUNCTION(BlueprintCallable)
	void SetBrushFromSoftTextureWithDefault(TSoftObjectPtr<UTexture2D> softTexture, bool matchSize);

public:
	UDBDImage();
};

FORCEINLINE uint32 GetTypeHash(const UDBDImage) { return 0; }
