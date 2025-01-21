#pragma once

#include "CoreMinimal.h"
#include "DBDTableRowBase.h"
#include "StadiaStorefrontDlcData.generated.h"

USTRUCT(BlueprintType)
struct FStadiaStorefrontDlcData: public FDBDTableRowBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FString DLC_Name;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FString General_Dlc_ID;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FString StadiaID;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FString copyright;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FString en_name;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FString en_description;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FString fr_name;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FString fr_description;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FString de_name;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FString de_description;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FString it_name;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FString it_description;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FString es_name;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FString es_description;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FString cht_name;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FString cht_description;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FString chs_name;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FString chs_description;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FString th_name;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FString th_description;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FString rus_name;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FString rus_description;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FString brapor_name;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FString brapor_description;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FString kor_name;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FString kor_description;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FString jpn_name;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FString jpn_description;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FString dan_name;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FString dan_description;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FString ara_name;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FString ara_description;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FString dut_name;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FString dut_description;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FString fin_name;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FString fin_description;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FString nor_name;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FString nor_description;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FString pol_name;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FString pol_description;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FString por_name;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FString por_description;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FString swe_name;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FString swe_description;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FString tr_name;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FString tr_description;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FString cfre_name;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FString cfre_description;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FString mex__latam_spanish__name;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FString mex__latam_spanish__description;

public:
	PLATFORMUTILITIES_API FStadiaStorefrontDlcData();
};

FORCEINLINE uint32 GetTypeHash(const FStadiaStorefrontDlcData) { return 0; }
