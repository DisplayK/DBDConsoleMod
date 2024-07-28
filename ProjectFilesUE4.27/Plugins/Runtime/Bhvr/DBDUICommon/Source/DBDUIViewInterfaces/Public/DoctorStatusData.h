#pragma once

#include "CoreMinimal.h"
#include "KillerStatusData.h"
#include "EAfflictionLevel.h"
#include "DoctorStatusData.generated.h"

UCLASS()
class DBDUIVIEWINTERFACES_API UDoctorStatusData : public UKillerStatusData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EAfflictionLevel AfflictionLevel;

public:
	UDoctorStatusData();
};

FORCEINLINE uint32 GetTypeHash(const UDoctorStatusData) { return 0; }
