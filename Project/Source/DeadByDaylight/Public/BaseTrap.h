#pragma once

#include "CoreMinimal.h"
#include "Collectable.h"
#include "BaseTrap.generated.h"

UCLASS(Abstract)
class DEADBYDAYLIGHT_API ABaseTrap : public ACollectable
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _isTrapSet;

public:
	UFUNCTION(BlueprintCallable)
	void SetIsTrapSet(const bool value);

	UFUNCTION(BlueprintPure)
	bool IsTrapSet() const;

public:
	ABaseTrap();
};

FORCEINLINE uint32 GetTypeHash(const ABaseTrap) { return 0; }
