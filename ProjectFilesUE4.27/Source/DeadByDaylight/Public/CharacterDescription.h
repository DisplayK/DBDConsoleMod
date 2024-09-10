#pragma once

#include "CoreMinimal.h"
#include "CustomizedMeshPart.h"
#include "DBDTableRowBase.h"
#include "EPlayerRole.h"
#include "ECharacterDifficulty.h"
#include "SlideShowDescription.h"
#include "EKillerAbilities.h"
#include "UObject/SoftObjectPtr.h"
#include "EGender.h"
#include "DataTableProxy.h"
#include "EKillerHeight.h"
#include "CharacterDescription.generated.h"

class UTexture2D;
class APawn;

USTRUCT(BlueprintType)
struct FCharacterDescription: public FDBDTableRowBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 CharacterIndex;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EPlayerRole Role;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	ECharacterDifficulty Difficulty;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText DisplayName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText BackStory;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText Biography;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName IconFilePath;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UTexture2D* HudIcon;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName BackgroundImagePath;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FCustomizedMeshPart> CustomizationDescription;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString ChapterDlcId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FString> AdditionalDlcIds;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool AvailableIfDlcInstalled;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	FName DebugName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IsInChunk0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IsAvailableInNonViolentBuild;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IsAvailableInAtlantaBuild;

	UPROPERTY(EditAnywhere)
	uint32 PlatformExclusiveFlag;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TSoftClassPtr<APawn> GamePawn;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftClassPtr<APawn> MenuPawn;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName DefaultItem;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EGender Gender;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<EKillerAbilities> KillerAbilities;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FDataTableProxy TunableDB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EKillerHeight KillerHeight;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FSlideShowDescription SlideShowDescriptions;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool HideStoreCustomizations;

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FName> CustomizationCategories;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FString CharacterId;

public:
	DEADBYDAYLIGHT_API FCharacterDescription();
};

FORCEINLINE uint32 GetTypeHash(const FCharacterDescription) { return 0; }
