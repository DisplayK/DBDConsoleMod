#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AnimEffectHandler.generated.h"

class AActor;

UCLASS(Blueprintable)
class ANIMATIONUTILITIES_API UAnimEffectHandler : public UObject
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintNativeEvent)
	bool HandleAnimNotify(AActor* player, const FName& notifyName) const;

public:
	UAnimEffectHandler();
};

FORCEINLINE uint32 GetTypeHash(const UAnimEffectHandler) { return 0; }
