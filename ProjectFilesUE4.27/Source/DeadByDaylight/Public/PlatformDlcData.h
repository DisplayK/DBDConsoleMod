#pragma once

#include "CoreMinimal.h"
#include "DBDTableRowBase.h"
#include "PlatformDlcData.generated.h"

USTRUCT(BlueprintType)
struct FPlatformDlcData: public FDBDTableRowBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FString ID;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FText UnlockDescription;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FString Description;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	int32 UISortOrder;

protected:
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FString DlcIdSteam;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FString DlcIdEpic;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FString DlcIdDmm;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FString DlcIdPS4;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FString DlcIdXB1;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FString DlcIdXSX;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FString DlcIdSwitch;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FString DlcIdGRDK;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FString DlcIdPS5;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FString DlcIdStadia;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FString DlcIdMobile;

public:
	DEADBYDAYLIGHT_API FPlatformDlcData();
};

FORCEINLINE uint32 GetTypeHash(const FPlatformDlcData) { return 0; }
