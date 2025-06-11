#include "Tutorial/Components/HealthComponent.h"

UHealthComponent::UHealthComponent()
{
	bCanTakeDamage = true;
}

void UHealthComponent::BeginPlay()
{
	Super::BeginPlay();
}

void UHealthComponent::Die()
{
	GetOwner()->Destroy();
}

void UHealthComponent::TakeDamage(int Damage)
{
	if (bCanTakeDamage)
	{
		Health -= Damage;
		bCanTakeDamage = false;

		// delay
		FTimerHandle InvincibilityDelay;
		GetWorld()->GetTimerManager().SetTimer(InvincibilityDelay, this, &UHealthComponent::AllowTakeDamage, 0.5f, false);

		// die function
		if (Health <= 0)
		{
			Die();
		}
	}
}

void UHealthComponent::AllowTakeDamage()
{
	bCanTakeDamage = true;
}