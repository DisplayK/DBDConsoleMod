#pragma once

#include "CoreMinimal.h"
#include "BaseBloodwebContentAdapter.h"
#include "ClientBloodwebContentAdapter.generated.h"

class UBloodwebGenerator;

UCLASS()
class DEADBYDAYLIGHT_API UClientBloodwebContentAdapter : public UBaseBloodwebContentAdapter
{
	GENERATED_BODY()

private:
	UPROPERTY(Transient)
	UBloodwebGenerator* _bloodwebBuilder;

public:
	UClientBloodwebContentAdapter();
};

FORCEINLINE uint32 GetTypeHash(const UClientBloodwebContentAdapter) { return 0; }
