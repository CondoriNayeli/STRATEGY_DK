// Fill out your copyright notice in the Description page of Project Settings.


#include "EstadoIrAOOrigen.h"

// Sets default values
AEstadoIrAOOrigen::AEstadoIrAOOrigen()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AEstadoIrAOOrigen::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AEstadoIrAOOrigen::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}


void AEstadoIrAOOrigen::EjecutarComportamiento(APlataforma* Plataforma, float DeltaTime)
{
	// Mover la plataforma de vuelta a su posición inicial
	Plataforma->VolverAOrigen();
}