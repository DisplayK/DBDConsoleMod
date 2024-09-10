#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "DBDProjectileUtilities.generated.h"

class UObject;
class UAuthoritativeActorPoolComponent;
class UAuthoritativePoolProjectileProviderAdapter;

UCLASS(BlueprintType)
class DEADBYDAYLIGHT_API UDBDProjectileUtilities : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable)
	static UAuthoritativePoolProjectileProviderAdapter* CreateProjectilePoolAdapter(UObject* outer, UAuthoritativeActorPoolComponent* pool);

public:
	UDBDProjectileUtilities();
};

FORCEINLINE uint32 GetTypeHash(const UDBDProjectileUtilities) { return 0; }
