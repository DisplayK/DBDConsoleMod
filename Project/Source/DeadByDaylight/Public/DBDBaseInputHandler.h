#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "DBDBaseInputHandler.generated.h"

class USpringArmComponent;
class APawn;

UCLASS()
class UDBDBaseInputHandler : public UObject
{
	GENERATED_BODY()

public:
	UPROPERTY(Transient, BlueprintReadWrite, EditAnywhere)
	APawn* _pawn;

	UPROPERTY(Transient, meta=(BindWidgetOptional), BlueprintReadWrite, EditAnywhere)
	USpringArmComponent* _cameraBoom;

public:
	UDBDBaseInputHandler();
};

FORCEINLINE uint32 GetTypeHash(const UDBDBaseInputHandler) { return 0; }
