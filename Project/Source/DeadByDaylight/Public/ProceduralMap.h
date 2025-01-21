#pragma once

#include "CoreMinimal.h"
#include "DBDTableRowBase.h"
#include "ProceduralMap.generated.h"

USTRUCT(BlueprintType)
struct FProceduralMap: public FDBDTableRowBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName MapId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText Name;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText ThemeName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText Description;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float HookMinDistance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 HookMinCount;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 HookMaxCount;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float BookShelvesMinDistance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 BookShelvesMinCount;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 BookShelvesMaxCount;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 LivingWorldObjectsMinCount;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 LivingWorldObjectsMaxCount;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString ThumbnailPath;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 SortingIndex;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString DlcIDString;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<int32> FixedLayoutSeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IsInNonViolentBuild;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IsLicensed;

public:
	DEADBYDAYLIGHT_API FProceduralMap();
};

FORCEINLINE uint32 GetTypeHash(const FProceduralMap) { return 0; }
