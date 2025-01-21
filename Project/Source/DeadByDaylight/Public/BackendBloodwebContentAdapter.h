#pragma once

#include "CoreMinimal.h"
#include "BaseBloodwebContentAdapter.h"
#include "BackendBloodwebContentAdapter.generated.h"

class UBloodwebGenerator;

UCLASS()
class DEADBYDAYLIGHT_API UBackendBloodwebContentAdapter : public UBaseBloodwebContentAdapter
{
	GENERATED_BODY()

private:
	UPROPERTY(Transient)
	UBloodwebGenerator* _bloodwebBuilder;

public:
	UBackendBloodwebContentAdapter();
};

FORCEINLINE uint32 GetTypeHash(const UBackendBloodwebContentAdapter) { return 0; }
