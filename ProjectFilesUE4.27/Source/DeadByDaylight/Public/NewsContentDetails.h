#pragma once

#include "CoreMinimal.h"
#include "NewsContentDetails.generated.h"

USTRUCT()
struct FNewsContentDetails
{
	GENERATED_BODY()

public:
	UPROPERTY()
	int32 Weight;

	UPROPERTY()
	FString Version;

	UPROPERTY()
	FString Title;

	UPROPERTY()
	FString Description;

	UPROPERTY()
	FString ImagePath;

	UPROPERTY(SkipSerialization)
	bool ImagePath_IsSet;

	UPROPERTY()
	FString DwnImagePath;

	UPROPERTY(SkipSerialization)
	bool DwnImagePath_IsSet;

	UPROPERTY()
	int32 ImageHeight;

	UPROPERTY(SkipSerialization)
	bool ImageHeight_IsSet;

	UPROPERTY()
	bool IsHidden;

	UPROPERTY(SkipSerialization)
	bool IsHidden_IsSet;

protected:
	UPROPERTY()
	int32 Type;

	UPROPERTY(SkipSerialization)
	bool Type_IsSet;

	UPROPERTY()
	TArray<FString> ContentTags;

	UPROPERTY()
	FString StartDate;

public:
	DEADBYDAYLIGHT_API FNewsContentDetails();
};

FORCEINLINE uint32 GetTypeHash(const FNewsContentDetails) { return 0; }
