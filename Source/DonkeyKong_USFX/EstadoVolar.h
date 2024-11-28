// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "IPlataforma.h"
#include "EstadoVolar.generated.h"

UCLASS()
class DONKEYKONG_USFX_API AEstadoVolar : public AActor, public IIPlataforma
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AEstadoVolar();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
public:
	virtual void EjecutarComportamiento(APlataforma* Plataforma, float DeltaTime) override;

};
