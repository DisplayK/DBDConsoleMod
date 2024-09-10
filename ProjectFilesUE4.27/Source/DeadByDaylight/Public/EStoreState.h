#pragma once

#include "CoreMinimal.h"
#include "EStoreState.generated.h"

UENUM(BlueprintType)
enum class EStoreState : uint8
{
	None,
	Featured,
	CharacterSelection,
	CharacterStory,
	CharacterCatalog,
	BuyCurrency,
	ShrineOfSecrets,
};
