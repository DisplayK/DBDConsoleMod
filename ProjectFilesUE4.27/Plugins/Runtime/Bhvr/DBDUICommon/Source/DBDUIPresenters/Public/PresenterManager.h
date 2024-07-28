#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "ELoadingTransitionType.h"
#include "PresenterManager.generated.h"

class UPresenterGroup;

UCLASS()
class DBDUIPRESENTERS_API UPresenterManager : public UGameInstanceSubsystem
{
	GENERATED_BODY()

private:
	UPROPERTY(Transient, Export)
	TArray<UPresenterGroup*> _persistentPresenterGroups;

	UPROPERTY(Transient, Export)
	TArray<UPresenterGroup*> _transientPresenterGroups;

private:
	UFUNCTION()
	void OnViewportCreated();

	UFUNCTION()
	void OnLoadingTransition(const ELoadingTransitionType transitionType);

public:
	UPresenterManager();
};

FORCEINLINE uint32 GetTypeHash(const UPresenterManager) { return 0; }
