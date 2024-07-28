#pragma once

#include "CoreMinimal.h"
#include "FXWidgetPlayer.generated.h"

class UNiagaraComponent;

USTRUCT(BlueprintType)
struct FFXWidgetPlayer
{
	GENERATED_BODY()

public:
	UPROPERTY(Export)
	UNiagaraComponent* NiagaraComponent;

public:
	FXWIDGET_API FFXWidgetPlayer();
};

FORCEINLINE uint32 GetTypeHash(const FFXWidgetPlayer) { return 0; }
