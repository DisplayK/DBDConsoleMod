#pragma once

#include "CoreMinimal.h"
#include "ETunableComparison.generated.h"

UENUM(BlueprintType)
namespace ETunableComparison
{
	enum Type
	{
		Equal,
		NotEqual,
		Less,
		LessOrEqual,
		Greater,
		GreaterOrEqual,
	};
}
