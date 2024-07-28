#pragma once

#include "CoreMinimal.h"
#include "BTService_FindInteractor.h"
#include "InLockerPerk.h"
#include "EFindInteractableLockerStatusFilter.h"
#include "BTService_FindInteractor_Locker.generated.h"

UCLASS()
class DBDBOTS_API UBTService_FindInteractor_Locker : public UBTService_FindInteractor
{
	GENERATED_BODY()

public:
	UPROPERTY(EditInstanceOnly)
	TArray<FInLockerPerk> PerksToRunInLocker;

	UPROPERTY(EditInstanceOnly)
	EFindInteractableLockerStatusFilter StatusFilter;

public:
	UBTService_FindInteractor_Locker();
};

FORCEINLINE uint32 GetTypeHash(const UBTService_FindInteractor_Locker) { return 0; }
