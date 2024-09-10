#pragma once

#include "CoreMinimal.h"
#include "AuthoritativeActorPoolComponent.h"
#include "MockAuthoritativeActorPoolComponent.generated.h"

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class GAMEPLAYUTILITIES_API UMockAuthoritativeActorPoolComponent : public UAuthoritativeActorPoolComponent
{
	GENERATED_BODY()

public:
	UMockAuthoritativeActorPoolComponent();
};

FORCEINLINE uint32 GetTypeHash(const UMockAuthoritativeActorPoolComponent) { return 0; }
