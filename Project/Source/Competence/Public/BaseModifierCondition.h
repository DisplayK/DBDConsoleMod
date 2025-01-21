#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "BaseModifierCondition.generated.h"

class UBaseModifierContainer;
class AActor;
class UModifierSubjectProvider;

UCLASS(Blueprintable, Abstract, meta=(BlueprintSpawnableComponent))
class COMPETENCE_API UBaseModifierCondition : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(ReplicatedUsing=OnRep_OwningModifier, Transient, Export)
	UBaseModifierContainer* _owningModifier;

	UPROPERTY()
	UModifierSubjectProvider* _subjectProvider;

	UPROPERTY(ReplicatedUsing=OnRep_SubjectProviderClass, Transient)
	UClass* _subjectProviderClass;

public:
	UFUNCTION(BlueprintCallable)
	void SetSubjectProviderClass(UClass* subjectProviderClass);

private:
	UFUNCTION()
	void OnRep_SubjectProviderClass();

	UFUNCTION()
	void OnRep_OwningModifier();

protected:
	UFUNCTION(BlueprintNativeEvent)
	void InitializeSubjectProviderClass();

public:
	UFUNCTION(BlueprintPure)
	AActor* GetOwningActor() const;

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UBaseModifierCondition();
};

FORCEINLINE uint32 GetTypeHash(const UBaseModifierCondition) { return 0; }
