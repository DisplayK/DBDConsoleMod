#pragma once

#include "CoreMinimal.h"
#include "ArchiveNodeGraphViewData.h"
#include "TomeQuestEditorSaveDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FTomeQuestEditorSaveDelegate, const TArray<FArchiveNodeGraphViewData>&, nodeList);
