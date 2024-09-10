#pragma once

#include "CoreMinimal.h"
#include "EPDGWorkResultState.h"
#include "OutputActorOwner.h"
#include "TOPWorkResultObject.generated.h"

class UObject;
class UHoudiniOutput;

USTRUCT()
struct FTOPWorkResultObject
{
	GENERATED_BODY()

public:
	UPROPERTY(NonTransactional)
	FString Name;

	UPROPERTY(NonTransactional)
	FString FilePath;

	UPROPERTY(NonTransactional)
	EPDGWorkResultState State;

	UPROPERTY(NonTransactional)
	int32 WorkItemResultInfoIndex;

protected:
	UPROPERTY(NonTransactional)
	TArray<UHoudiniOutput*> ResultOutputs;

	UPROPERTY(NonTransactional)
	bool bAutoBakedSinceLastLoad;

private:
	UPROPERTY(NonTransactional)
	TArray<UObject*> OutputObjectsToDelete;

	UPROPERTY(NonTransactional)
	FOutputActorOwner OutputActorOwner;

public:
	HOUDINIENGINERUNTIME_API FTOPWorkResultObject();
};

FORCEINLINE uint32 GetTypeHash(const FTOPWorkResultObject) { return 0; }
