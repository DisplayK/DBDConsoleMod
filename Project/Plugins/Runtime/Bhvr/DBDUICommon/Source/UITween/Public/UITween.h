#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "EEasingType.h"
#include "UITween.generated.h"

class UUITweenInstance;
class UWidget;

UCLASS(BlueprintType)
class UITWEEN_API UUITween : public UGameInstanceSubsystem
{
	GENERATED_BODY()

public:
	UPROPERTY(Transient)
	TArray<UUITweenInstance*> ActiveInstances;

public:
	UFUNCTION(BlueprintCallable)
	static UUITweenInstance* Create(UWidget* targetWidget, float duration, float delay, EEasingType easing);

	UFUNCTION(BlueprintCallable)
	static void Clear(UWidget* targetWidget);

public:
	UUITween();
};

FORCEINLINE uint32 GetTypeHash(const UUITween) { return 0; }
