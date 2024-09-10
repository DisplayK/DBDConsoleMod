#pragma once

#include "CoreMinimal.h"
#include "ArchiveQuestMapViewInterface.h"
#include "EEasingType.h"
#include "CoreTabContentWidget.h"
#include "ArchiveNodeGraphViewData.h"
#include "Templates/SubclassOf.h"
#include "TomeQuestNodeHoveredDelegate.h"
#include "ArchiveMapPathViewData.h"
#include "TomeQuestMapCreatedDelegate.h"
#include "TomeQuestNodeUnhoveredDelegate.h"
#include "TomeQuestNodeSelectedDelegate.h"
#include "CoreArchiveQuestMapWidget.generated.h"

class UCanvasPanel;
class UCoreButtonWidget;
class UCoreArchiveQuestNodeWidget;
class UCoreArchiveQuestPathWidget;
class UAkAudioEvent;

UCLASS(EditInlineNew)
class DBDUIVIEWSCORE_API UCoreArchiveQuestMapWidget : public UCoreTabContentWidget, public IArchiveQuestMapViewInterface
{
	GENERATED_BODY()

protected:
	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UCanvasPanel* ChallengesContainer;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
	TSubclassOf<UCoreArchiveQuestNodeWidget> ArchiveQuestNodeWidgetClass;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
	TSubclassOf<UCoreArchiveQuestPathWidget> ArchiveQuestPathWidgetClass;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
	int32 MaxDisplayedNodes;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
	int32 MaxDisplayedPaths;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
	float QuestMapRevealDuration;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
	float NodeRevealDuration;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
	float PathRevealDuration;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
	EEasingType NodeRevealEasingType;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
	EEasingType PathRevealEasingType;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
	UAkAudioEvent* QuestMapGenerationSound;

	UPROPERTY(BlueprintReadOnly)
	TArray<FArchiveNodeGraphViewData> _nodeGraphDataList;

	UPROPERTY(BlueprintReadOnly)
	TArray<FArchiveMapPathViewData> _pathDataList;

	UPROPERTY()
	FTomeQuestMapCreatedDelegate _questMapCreatedDelegate;

	UPROPERTY()
	FTomeQuestNodeHoveredDelegate _questNodeHoveredDelegate;

	UPROPERTY()
	FTomeQuestNodeUnhoveredDelegate _questNodeUnhoveredDelegate;

	UPROPERTY()
	FTomeQuestNodeSelectedDelegate _questNodeSelectedDelegate;

	UPROPERTY(Transient, Export)
	TMap<FName, UCoreArchiveQuestNodeWidget*> _nodeDictionary;

	UPROPERTY(Transient, Export)
	TMap<FName, UCoreArchiveQuestPathWidget*> _pathDictionary;

private:
	UPROPERTY(Transient, Export)
	TArray<UCoreArchiveQuestNodeWidget*> _nodeWidgetPool;

	UPROPERTY(Transient, Export)
	TArray<UCoreArchiveQuestPathWidget*> _pathWidgetPool;

protected:
	UFUNCTION()
	void UnbindFromPath(UCoreArchiveQuestPathWidget* path);

	UFUNCTION()
	void UnbindFromNode(UCoreArchiveQuestNodeWidget* node);

private:
	UFUNCTION()
	void SetupPath(const FArchiveMapPathViewData& pathData);

	UFUNCTION()
	void SetupNode(const FArchiveNodeGraphViewData& nodeData);

protected:
	UFUNCTION()
	void OnNodeUnhovered(UCoreButtonWidget* buttonTarget);

private:
	UFUNCTION()
	void OnNodesRevealCompleted();

protected:
	UFUNCTION()
	void OnNodeHovered(UCoreButtonWidget* buttonTarget);

	UFUNCTION()
	void OnNodeClicked(UCoreButtonWidget* buttonTarget);

	UFUNCTION()
	void BindToPath(UCoreArchiveQuestPathWidget* path);

	UFUNCTION()
	void BindToNode(UCoreArchiveQuestNodeWidget* node);

public:
	UCoreArchiveQuestMapWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCoreArchiveQuestMapWidget) { return 0; }
