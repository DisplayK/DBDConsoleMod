#pragma once

#include "CoreMinimal.h"
#include "ECustomizationCategory.h"
#include "GameplayTagContainer.h"
#include "MaterialReplacerData.h"
#include "CustomizationData.h"
#include "UObject/SoftObjectPtr.h"
#include "ConditionalMaterialReplacer.h"
#include "TextureReplacerData.h"
#include "ECharmCategory.h"
#include "BPAttachementSocketData.h"
#include "CustomAnimData.h"
#include "UnlockSaveStatCondition.h"
#include "CustomSoundFXData.h"
#include "CustomizationItemData.generated.h"

class USkeletalMesh;
class UAnimInstance;
class AActor;

USTRUCT(BlueprintType)
struct FCustomizationItemData: public FCustomizationData
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	ECustomizationCategory Category;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TSoftObjectPtr<USkeletalMesh> ItemMesh;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TSoftClassPtr<UAnimInstance> AnimClass;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TSoftClassPtr<AActor> ItemBlueprint;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TArray<FMaterialReplacerData> MaterialsMap;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	FConditionalMaterialReplacer ConditionalMaterialReplacer;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TArray<FTextureReplacerData> TexturesMap;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TArray<FName> SkeletalComponentTags;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	FGameplayTagContainer CosmeticOverrideSemanticTags;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	FText CollectionName;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	FText CollectionDescription;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	int32 PrestigeUlockLevel;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	FString PrestigeUnlockDate;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	FName EventId;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	ECharmCategory CharmCategory;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TArray<FBPAttachementSocketData> SocketAttachements;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TArray<FUnlockSaveStatCondition> UnlockingConditions;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool IsInStore;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool IsInNonViolentBuild;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool IsAvailableInAtlantaBuild;

	UPROPERTY(EditAnywhere)
	uint32 PlatformExclusiveFlag;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TArray<FCustomSoundFXData> CustomSFXs;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	FCustomAnimData AnimationData;

public:
	DEADBYDAYLIGHT_API FCustomizationItemData();
};

FORCEINLINE uint32 GetTypeHash(const FCustomizationItemData) { return 0; }
