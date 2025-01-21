#pragma once

#include "CoreMinimal.h"
#include "UObject/ScriptInterface.h"
#include "EditorInterfaces.generated.h"

class IArchiveQuestMapViewInterface;
class IArchiveLevelProgressionViewInterface;
class IArchiveEditorViewInterface;

USTRUCT(BlueprintType)
struct FEditorInterfaces
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TScriptInterface<IArchiveQuestMapViewInterface> QuestMapInterface;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TScriptInterface<IArchiveLevelProgressionViewInterface> LevelProgressionInterface;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TScriptInterface<IArchiveEditorViewInterface> EditorInterface;

public:
	DBDUIVIEWINTERFACES_API FEditorInterfaces();
};

FORCEINLINE uint32 GetTypeHash(const FEditorInterfaces) { return 0; }
