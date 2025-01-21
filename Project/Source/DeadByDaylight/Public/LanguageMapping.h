#pragma once

#include "CoreMinimal.h"
#include "EForumLanguages.h"
#include "Engine/DataTable.h"
#include "ECustomerSupportLanguages.h"
#include "LanguageMapping.generated.h"

USTRUCT(BlueprintType)
struct FLanguageMapping: public FTableRowBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString Language;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	ECustomerSupportLanguages CustomerSupportId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EForumLanguages ForumId;

public:
	DEADBYDAYLIGHT_API FLanguageMapping();
};

FORCEINLINE uint32 GetTypeHash(const FLanguageMapping) { return 0; }
