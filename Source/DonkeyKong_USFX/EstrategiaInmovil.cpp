// Fill out your copyright notice in the Description page of Project Settings.


#include "EstrategiaInmovil.h"

// Sets default values
AEstrategiaInmovil::AEstrategiaInmovil()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AEstrategiaInmovil::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AEstrategiaInmovil::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AEstrategiaInmovil::EjecutarComportamiento(APlataforma* Plataforma, float DeltaTime)
{
	// Detiene el movimiento de la plataforma (sin acción)
	Plataforma->DetenerMovimiento();
}

