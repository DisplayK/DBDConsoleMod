#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "DBDBaseInputHandler.generated.h"

class USpringArmComponent;
class APawn;

UCLASS()
class UDBDBaseInputHandler : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient, BlueprintReadWrite, EditAnywhere)
    APawn* _pawn;
    
    UPROPERTY(Export, Transient, BlueprintReadWrite, EditAnywhere)
    USpringArmComponent* _cameraBoom;
    
public:
    UDBDBaseInputHandler();
};

