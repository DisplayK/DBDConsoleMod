#pragma once

#include "CoreMinimal.h"
#include "BTService_FindInteractor.h"
#include "GameplayTagContainer.h"
#include "BTService_FindInteractor_WishList.generated.h"

UCLASS()
class DBDBOTS_API UBTService_FindInteractor_WishList : public UBTService_FindInteractor
{
	GENERATED_BODY()

public:
	UPROPERTY(EditInstanceOnly)
	FGameplayTag WishListTag;

public:
	UBTService_FindInteractor_WishList();
};

FORCEINLINE uint32 GetTypeHash(const UBTService_FindInteractor_WishList) { return 0; }
