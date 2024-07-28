#pragma once

#include "CoreMinimal.h"
#include "PathBuilder.h"
#include "EnvironmentQuery/EnvQueryTypes.h"
#include "PathBuilder_EQS.generated.h"

class UPathBuilder_EQS;

UCLASS(EditInlineNew)
class DBDBOTS_API UPathBuilder_EQS : public UPathBuilder
{
	GENERATED_BODY()

public:
	UPROPERTY(EditDefaultsOnly)
	FEQSParametrizedQueryExecutionRequest EQSRequest;

	UPROPERTY(EditDefaultsOnly)
	int32 NbMaxEQSRequests;

	UPROPERTY(EditDefaultsOnly)
	bool MergeToSinglePathPoint;

private:
	UPROPERTY(Transient)
	UPathBuilder_EQS* _pendingEQSRequestBuilder;

public:
	UPathBuilder_EQS();
};

FORCEINLINE uint32 GetTypeHash(const UPathBuilder_EQS) { return 0; }
