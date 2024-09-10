#pragma once

#include "CoreMinimal.h"
#include "CharacterTool.h"
#include "UIScreenshotTool.generated.h"

UCLASS()
class AUIScreenshotTool : public ACharacterTool
{
	GENERATED_BODY()

public:
	AUIScreenshotTool();
};

FORCEINLINE uint32 GetTypeHash(const AUIScreenshotTool) { return 0; }
