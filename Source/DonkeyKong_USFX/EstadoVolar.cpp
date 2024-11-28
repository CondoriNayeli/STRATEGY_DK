// Fill out your copyright notice in the Description page of Project Settings.


#include "EstadoVolar.h"

// Sets default values
AEstadoVolar::AEstadoVolar()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AEstadoVolar::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AEstadoVolar::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AEstadoVolar::EjecutarComportamiento(APlataforma* Plataforma, float DeltaTime)
{
	// Mover la plataforma hacia abajo
	Plataforma->MoverAbajo();
}

