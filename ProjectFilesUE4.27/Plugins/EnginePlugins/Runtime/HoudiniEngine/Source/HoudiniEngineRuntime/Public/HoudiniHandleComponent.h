#pragma once

#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "EHoudiniHandleType.h"
#include "HoudiniHandleComponent.generated.h"

class UHoudiniHandleParameter;

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class HOUDINIENGINERUNTIME_API UHoudiniHandleComponent : public USceneComponent
{
	GENERATED_BODY()

public:
	UPROPERTY()
	TArray<UHoudiniHandleParameter*> XformParms;

	UPROPERTY()
	UHoudiniHandleParameter* RSTParm;

	UPROPERTY()
	UHoudiniHandleParameter* RotOrderParm;

private:
	UPROPERTY()
	EHoudiniHandleType HandleType;

	UPROPERTY()
	FString HandleName;

public:
	UHoudiniHandleComponent();
};

FORCEINLINE uint32 GetTypeHash(const UHoudiniHandleComponent) { return 0; }
