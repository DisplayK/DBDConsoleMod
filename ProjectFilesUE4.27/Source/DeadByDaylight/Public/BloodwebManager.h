#pragma once

#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "UObject/NoExportTypes.h"
#include "BloodwebManager.generated.h"

class UBloodwebGenerator;
class UDBDGameInstance;
class UDBDDesignTunables;
class UBaseBloodwebContentAdapter;
class UBloodwebHandler;

UCLASS()
class DEADBYDAYLIGHT_API UBloodwebManager : public UObject
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere)
	TSubclassOf<UBloodwebGenerator> _bloodwebBuilderClass;

	UPROPERTY(Transient)
	UDBDGameInstance* _gameInstance;

	UPROPERTY(Transient)
	UDBDDesignTunables* _designTunables;

	UPROPERTY(Transient)
	UBaseBloodwebContentAdapter* _bloodWebContentAdapter;

	UPROPERTY(Transient)
	UBloodwebHandler* _bloodwebHandler;

public:
	UFUNCTION()
	void Init(UDBDGameInstance* gameInstance, UDBDDesignTunables* tunables);

public:
	UBloodwebManager();
};

FORCEINLINE uint32 GetTypeHash(const UBloodwebManager) { return 0; }
