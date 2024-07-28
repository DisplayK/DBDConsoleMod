#pragma once

#include "CoreMinimal.h"
#include "CustomizedMeshPart.h"
#include "Engine/DataAsset.h"
#include "CustomizationDescription.generated.h"

UCLASS(BlueprintType)
class DEADBYDAYLIGHT_API UCustomizationDescription : public UDataAsset
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FCustomizedMeshPart> Parts;

public:
	UCustomizationDescription();
};

FORCEINLINE uint32 GetTypeHash(const UCustomizationDescription) { return 0; }
