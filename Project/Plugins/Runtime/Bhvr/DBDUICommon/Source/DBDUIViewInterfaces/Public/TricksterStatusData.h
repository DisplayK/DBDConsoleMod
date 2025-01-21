#pragma once

#include "CoreMinimal.h"
#include "KillerStatusData.h"
#include "TricksterStatusData.generated.h"

UCLASS()
class DBDUIVIEWINTERFACES_API UTricksterStatusData : public UKillerStatusData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float CurrentLacerationLevel;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MaximumLacerationLevel;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IsDangerousLacerationLevel;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool WasRecentlyDamagedByLaceration;

public:
	UTricksterStatusData();
};

FORCEINLINE uint32 GetTypeHash(const UTricksterStatusData) { return 0; }
