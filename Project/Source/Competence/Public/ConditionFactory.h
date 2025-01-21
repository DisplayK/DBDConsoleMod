#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Templates/SubclassOf.h"
#include "UObject/ScriptInterface.h"
#include "ConditionFactory.generated.h"

class URangeBasedCondition;
class UNotModifierCondition;
class UTimerObject;
class UIsTimerDoneCondition;
class IConditionReceiver;
class ULingeringModifierCondition;
class UOrModifierCondition;
class UEventDrivenModifierCondition;
class UAndModifierCondition;

UCLASS(BlueprintType)
class COMPETENCE_API UConditionFactory : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable)
	static UOrModifierCondition* Or(TScriptInterface<IConditionReceiver> conditionReceiver);

	UFUNCTION(BlueprintCallable)
	static UNotModifierCondition* Not(TScriptInterface<IConditionReceiver> conditionReceiver);

	UFUNCTION(BlueprintCallable)
	static ULingeringModifierCondition* Lingering(TScriptInterface<IConditionReceiver> conditionReceiver, float timeToTrack);

	UFUNCTION(BlueprintCallable)
	static UIsTimerDoneCondition* IsTimerDone(TScriptInterface<IConditionReceiver> conditionReceiver, UTimerObject* timer);

	UFUNCTION(BlueprintCallable)
	static URangeBasedCondition* CreateRangeBasedConditionWithSubject(TScriptInterface<IConditionReceiver> conditionReceiver, TSubclassOf<URangeBasedCondition> conditionType, float range, UClass* subjectProviderClass);

	UFUNCTION(BlueprintCallable)
	static URangeBasedCondition* CreateRangeBasedCondition(TScriptInterface<IConditionReceiver> conditionReceiver, TSubclassOf<URangeBasedCondition> conditionType, float range);

	UFUNCTION(BlueprintCallable)
	static UEventDrivenModifierCondition* CreateAndReceiveConditionWithSubjectForBP(TScriptInterface<IConditionReceiver> conditionReceiver, TSubclassOf<UEventDrivenModifierCondition> conditionType, UClass* subjectProviderClass);

	UFUNCTION(BlueprintCallable)
	static UEventDrivenModifierCondition* CreateAndReceiveConditionForBP(TScriptInterface<IConditionReceiver> conditionReceiver, TSubclassOf<UEventDrivenModifierCondition> conditionType);

	UFUNCTION(BlueprintCallable)
	static UAndModifierCondition* And(TScriptInterface<IConditionReceiver> conditionReceiver);

public:
	UConditionFactory();
};

FORCEINLINE uint32 GetTypeHash(const UConditionFactory) { return 0; }
