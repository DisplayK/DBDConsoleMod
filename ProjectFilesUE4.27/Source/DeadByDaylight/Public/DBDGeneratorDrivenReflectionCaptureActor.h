#pragma once

#include "CoreMinimal.h"
#include "GeneratorDrivenActor.h"
#include "DBDGeneratorDrivenReflectionCaptureActor.generated.h"

class UGenyReflectionCaptureComponent;

UCLASS()
class DEADBYDAYLIGHT_API ADBDGeneratorDrivenReflectionCaptureActor : public AGeneratorDrivenActor
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export)
	UGenyReflectionCaptureComponent* genyReflectionCapture;

public:
	UFUNCTION(BlueprintCallable)
	void SwapToSecondState();

public:
	ADBDGeneratorDrivenReflectionCaptureActor();
};

FORCEINLINE uint32 GetTypeHash(const ADBDGeneratorDrivenReflectionCaptureActor) { return 0; }
