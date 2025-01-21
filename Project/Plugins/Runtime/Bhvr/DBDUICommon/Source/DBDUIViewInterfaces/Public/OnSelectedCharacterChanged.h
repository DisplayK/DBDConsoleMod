#pragma once

#include "CoreMinimal.h"
#include "OnSelectedCharacterChanged.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSelectedCharacterChanged, int32, SelectedCharacter);
