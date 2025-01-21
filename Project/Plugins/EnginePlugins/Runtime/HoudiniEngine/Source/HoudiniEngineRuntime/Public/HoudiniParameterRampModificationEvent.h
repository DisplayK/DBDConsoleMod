#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EHoudiniRampInterpolationType.h"
#include "HoudiniParameterRampModificationEvent.generated.h"

UCLASS(DefaultToInstanced)
class HOUDINIENGINERUNTIME_API UHoudiniParameterRampModificationEvent : public UObject
{
	GENERATED_BODY()

private:
	UPROPERTY()
	bool bIsInsertEvent;

	UPROPERTY()
	bool bIsFloatRamp;

public:
	UPROPERTY()
	int32 DeleteInstanceIndex;

	UPROPERTY()
	float InsertPosition;

	UPROPERTY()
	float InsertFloat;

	UPROPERTY()
	FLinearColor InsertColor;

	UPROPERTY()
	EHoudiniRampInterpolationType InsertInterpolation;

public:
	UHoudiniParameterRampModificationEvent();
};

FORCEINLINE uint32 GetTypeHash(const UHoudiniParameterRampModificationEvent) { return 0; }
