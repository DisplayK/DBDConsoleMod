#pragma once

#include "CoreMinimal.h"
#include "LoadingImages.h"
#include "UObject/NoExportTypes.h"
#include "LoadingImagesDataProvider.generated.h"

class UDynamicContentHolder;

UCLASS()
class DYNAMICCONTENT_API ULoadingImagesDataProvider : public UObject
{
	GENERATED_BODY()

private:
	UPROPERTY(Transient)
	TMap<FName, FLoadingImages> _cachedLoadingImages;

	UPROPERTY(Transient)
	UDynamicContentHolder* _owningDynamicContentHolder;

public:
	ULoadingImagesDataProvider();
};

FORCEINLINE uint32 GetTypeHash(const ULoadingImagesDataProvider) { return 0; }
