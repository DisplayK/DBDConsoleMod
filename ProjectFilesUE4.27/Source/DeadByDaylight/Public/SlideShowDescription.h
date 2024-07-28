#pragma once

#include "CoreMinimal.h"
#include "DBDTableRowBase.h"
#include "EPerkCategory.h"
#include "SlideShowDescription.generated.h"

USTRUCT(BlueprintType)
struct FSlideShowDescription: public FDBDTableRowBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	FName Id;

	UPROPERTY(EditAnywhere)
	FText Overview;

	UPROPERTY(EditAnywhere)
	FText Playstyle;

	UPROPERTY(EditAnywhere)
	FString ImageFilePath;

	UPROPERTY(EditAnywhere)
	TArray<EPerkCategory> PerkCategory;

public:
	DEADBYDAYLIGHT_API FSlideShowDescription();
};

FORCEINLINE uint32 GetTypeHash(const FSlideShowDescription) { return 0; }
