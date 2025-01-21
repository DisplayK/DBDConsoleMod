#pragma once

#include "CoreMinimal.h"
#include "UObject/SoftObjectPtr.h"
#include "GameFramework/Actor.h"
#include "GeneratedLevelData.h"
#include "EKillerMoodInfluence.h"
#include "ProceduralLevelData.generated.h"

class UPaperTileMap;

UCLASS()
class DEADBYDAYLIGHT_API AProceduralLevelData : public AActor
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	TSoftObjectPtr<UPaperTileMap> SelectedPaperMap;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	int32 GenerationSeed;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	EKillerMoodInfluence LevelMood;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FGeneratedLevelData GeneratedData;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TArray<FName> Offerings;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	int32 PerksLevel;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TArray<FName> Perks;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	bool SkipGameplayElementGeneration;

private:
	UPROPERTY(Transient)
	AActor* _builder;

	UPROPERTY(Transient)
	UClass* _builderClassDef;

public:
	AProceduralLevelData();
};

FORCEINLINE uint32 GetTypeHash(const AProceduralLevelData) { return 0; }
