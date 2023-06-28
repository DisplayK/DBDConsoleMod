#pragma once
#include "CoreMinimal.h"
#include "CustomizationData.h"
#include "ECustomizationCategory.h"
#include "ConditionalMaterialReplacer.h"
#include "MaterialReplacerData.h"
#include "CustomSoundFXData.h"
#include "ECharmCategory.h"
#include "BPAttachementSocketData.h"
#include "UnlockSaveStatCondition.h"
#include "CustomAnimData.h"
#include "CustomizationItemData.generated.h"

class USkeletalMesh;
class UAnimInstance;
class AActor;

USTRUCT()
struct DEADBYDAYLIGHT_API FCustomizationItemData : public FCustomizationData {
    GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	ECustomizationCategory Category;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftObjectPtr<USkeletalMesh> ItemMesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftObjectPtr<UBlueprint> ItemBlueprint;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FMaterialReplacerData> MaterialsMap;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FConditionalMaterialReplacer ConditionalMaterialReplacer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FName> SkeletalComponentTags;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText CollectionName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText CollectionDescription;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 PrestigeUlockLevel;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString PrestigeUnlockDate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName EventId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FBPAttachementSocketData> SocketAttachments;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FUnlockSaveStatCondition UnlockingConditions;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IsInStore;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IsInNonViolentBuild;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	uint8 PlatformExclusiveFlag;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FCustomSoundFXData> CustomSFXs;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FCustomAnimData AnimationData;

    FCustomizationItemData();
};

