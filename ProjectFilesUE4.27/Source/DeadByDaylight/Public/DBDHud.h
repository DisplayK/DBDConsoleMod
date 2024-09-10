#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "DBDHud.generated.h"

class AStatusView;
class AActor;

UCLASS()
class UDBDHud : public UObject
{
	GENERATED_BODY()

private:
	UPROPERTY()
	TMap<FName, AStatusView*> _statusViews;

private:
	UFUNCTION()
	void RemoveStatusViewOnDestroy(AActor* actor);

public:
	UDBDHud();
};

FORCEINLINE uint32 GetTypeHash(const UDBDHud) { return 0; }
