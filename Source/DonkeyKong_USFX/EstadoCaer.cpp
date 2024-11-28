// Fill out your copyright notice in the Description page of Project Settings.


#include "EstadoCaer.h"

// Sets default values
AEstadoCaer::AEstadoCaer()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AEstadoCaer::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AEstadoCaer::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}


void AEstadoCaer::EjecutarComportamiento(APlataforma* Plataforma, float DeltaTime)
{
	// Mover la plataforma hacia arriba
	Plataforma->MoverArriba();
}