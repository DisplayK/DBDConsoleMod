#pragma once

#include "CoreMinimal.h"
#include "DBDTableRowBase.h"
#include "UObject/SoftObjectPtr.h"
#include "EStatusEffectType.h"
#include "StatusViewProperties.generated.h"

class AStatusView;
class UTexture2D;

USTRUCT(BlueprintType)
struct FStatusViewProperties: public FDBDTableRowBase
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FName StatusViewID;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FText Description;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FText DisplayName;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TSoftClassPtr<AStatusView> StatusViewBlueprint;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	EStatusEffectType StatusType;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FString IconFilePath;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TSoftObjectPtr<UTexture2D> IconAsset;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	bool PlayIntroAnimmation;

public:
	DEADBYDAYLIGHT_API FStatusViewProperties();
};

FORCEINLINE uint32 GetTypeHash(const FStatusViewProperties) { return 0; }
