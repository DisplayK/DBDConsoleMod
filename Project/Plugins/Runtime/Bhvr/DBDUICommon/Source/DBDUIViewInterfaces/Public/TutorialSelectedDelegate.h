#pragma once

#include "CoreMinimal.h"
#include "TutorialSelectedDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FTutorialSelectedDelegate, const FString&, stepId, const FString&, tutorialId);
