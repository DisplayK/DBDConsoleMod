#pragma once

#include "CoreMinimal.h"
#include "ArchiveNodeOnDragBegin.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FArchiveNodeOnDragBegin, const FName&, nodeId);
