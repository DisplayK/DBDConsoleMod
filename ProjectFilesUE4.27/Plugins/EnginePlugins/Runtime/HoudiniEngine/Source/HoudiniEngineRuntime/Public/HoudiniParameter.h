#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EHoudiniParameterType.h"
#include "HoudiniParameter.generated.h"

UCLASS(DefaultToInstanced)
class HOUDINIENGINERUNTIME_API UHoudiniParameter : public UObject
{
	GENERATED_BODY()

protected:
	UPROPERTY()
	FString Name;

	UPROPERTY()
	FString Label;

	UPROPERTY()
	EHoudiniParameterType ParmType;

	UPROPERTY()
	uint32 TupleSize;

	UPROPERTY(DuplicateTransient)
	int32 NodeId;

	UPROPERTY(DuplicateTransient)
	int32 ParmId;

	UPROPERTY(DuplicateTransient)
	int32 ParentParmId;

	UPROPERTY()
	int32 ChildIndex;

	UPROPERTY()
	bool bIsVisible;

	UPROPERTY()
	bool bIsParentFolderVisible;

	UPROPERTY()
	bool bIsDisabled;

	UPROPERTY()
	bool bHasChanged;

	UPROPERTY()
	bool bNeedsToTriggerUpdate;

	UPROPERTY(Transient, DuplicateTransient)
	bool bIsDefault;

	UPROPERTY()
	bool bIsSpare;

	UPROPERTY()
	bool bJoinNext;

	UPROPERTY()
	bool bIsChildOfMultiParm;

	UPROPERTY()
	bool bIsDirectChildOfMultiParm;

	UPROPERTY(DuplicateTransient)
	bool bPendingRevertToDefault;

	UPROPERTY(DuplicateTransient)
	TArray<int32> TuplePendingRevertToDefault;

	UPROPERTY()
	FString Help;

	UPROPERTY()
	uint32 TagCount;

	UPROPERTY()
	int32 ValueIndex;

	UPROPERTY()
	bool bHasExpression;

	UPROPERTY(DuplicateTransient)
	bool bShowExpression;

	UPROPERTY()
	FString ParamExpression;

	UPROPERTY()
	TMap<FString, FString> Tags;

	UPROPERTY()
	bool bAutoUpdate;

public:
	UHoudiniParameter();
};

FORCEINLINE uint32 GetTypeHash(const UHoudiniParameter) { return 0; }
