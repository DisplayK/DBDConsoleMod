#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ArchiveTomeSkinData.generated.h"

class UMaterialInterface;

USTRUCT(BlueprintType)
struct FArchiveTomeSkinData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	UMaterialInterface* ArchiveTitleBarSkinMaterial;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	UMaterialInterface* ArchiveSideNavSkinMaterial;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	UMaterialInterface* ArchiveSideNavSmokeSkinMaterial;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	UMaterialInterface* ArchiveTabsSkinMaterial;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	UMaterialInterface* ArchiveProgressPanelSmokeSkinMaterial;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FLinearColor ArchiveSkinColor;

public:
	DBDSHAREDTYPES_API FArchiveTomeSkinData();
};

FORCEINLINE uint32 GetTypeHash(const FArchiveTomeSkinData) { return 0; }
