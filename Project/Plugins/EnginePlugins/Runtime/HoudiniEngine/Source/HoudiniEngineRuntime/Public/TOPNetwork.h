#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "TOPNetwork.generated.h"

class UTOPNode;

UCLASS()
class HOUDINIENGINERUNTIME_API UTOPNetwork : public UObject
{
	GENERATED_BODY()

public:
	UPROPERTY(NonTransactional, Transient)
	int32 NodeId;

	UPROPERTY(NonTransactional)
	FString NodeName;

	UPROPERTY(NonTransactional)
	FString NodePath;

	UPROPERTY()
	TArray<UTOPNode*> AllTOPNodes;

	UPROPERTY()
	int32 SelectedTOPIndex;

	UPROPERTY(NonTransactional)
	FString ParentName;

	UPROPERTY()
	bool bShowResults;

	UPROPERTY()
	bool bAutoLoadResults;

public:
	UTOPNetwork();
};

FORCEINLINE uint32 GetTypeHash(const UTOPNetwork) { return 0; }
