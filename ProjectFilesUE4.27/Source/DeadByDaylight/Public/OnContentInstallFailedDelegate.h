#pragma once
#include "CoreMinimal.h"
#include "OnContentInstallFailedDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_TwoParams(FOnContentInstallFailed, FText, ErrorText, int32, ErrorCode);

