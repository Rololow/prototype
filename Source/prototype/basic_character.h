// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "basic_character.generated.h"

UCLASS()
class PROTOTYPE_API Abasic_character : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	Abasic_character();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
