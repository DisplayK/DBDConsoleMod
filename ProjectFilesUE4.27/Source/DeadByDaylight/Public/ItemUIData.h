#pragma once

#include "CoreMinimal.h"
#include "CustomTransformation.h"
#include "UObject/SoftObjectPtr.h"
#include "ItemUIData.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FItemUIData
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	FText DisplayName;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	FText Description;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TArray<FString> IconFilePathList;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TArray<TSoftObjectPtr<UTexture2D>> IconAssetList;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	FCustomTransformation CustomTransformation;

	UPROPERTY(EditAnywhere)
	uint32 PlatformsUnlicensedNameOverride;

	UPROPERTY(EditAnywhere)
	uint32 PlatformsUnlicensedDescriptionOverride;

	UPROPERTY(EditAnywhere)
	uint32 PlatformsForIconUnlicensedFilePathListOverride;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TArray<FString> IconUnlicensedFilePathListOverride;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool LicenseExpirationOverride;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	FText DisplayNameUnlicensedOverride;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	FText DescriptionUnlicensedOverride;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	int32 AssociatedCharacterIndex;

public:
	DEADBYDAYLIGHT_API FItemUIData();
};

FORCEINLINE uint32 GetTypeHash(const FItemUIData) { return 0; }
