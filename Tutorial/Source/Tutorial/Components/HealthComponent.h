#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "HealthComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class TUTORIAL_API UHealthComponent : public UActorComponent
{
	GENERATED_BODY()

public:	

	UHealthComponent();

protected:

	virtual void BeginPlay() override;

protected:

	UPROPERTY(EditAnywhere)
	int Health;

	bool bCanTakeDamage;

	void Die();

	void AllowTakeDamage();

public:
	void TakeDamage(int Damage);
};
