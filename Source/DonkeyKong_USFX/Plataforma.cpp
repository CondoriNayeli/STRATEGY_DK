// Fill out your copyright notice in the Description page of Project Settings.


#include "Plataforma.h"
#include "EstrategiaInmovil.h"
#include "EstadoVolar.h"
#include "EstadoCaer.h"
#include "EstadoIrAOOrigen.h"
//#include "Components/BoxComponent.h"
/*#include "Barril.h"
#include "BarrilExplosivo.h"
#include "BarrilComun.h*/
// Sets default values
APlataforma::APlataforma()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//establece el componenete raiz de la malla
	static ConstructorHelpers::FObjectFinder<UStaticMesh> plataformaMesh(TEXT("StaticMesh'/Game/Plataformas/SM_MERGED_Plataforma__8.SM_MERGED_Plataforma__8'"));
	// Crear el componente de malla est?tica
	plataforma = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("plataforma"));
	plataforma->SetStaticMesh(plataformaMesh.Object);
	SetRootComponent(plataforma);
	//Habitar fisicas de  la instancia
	//plataforma->SetSimulatePhysics(false);
	//Modifica la forma del objeto
	plataforma->SetWorldScale3D(FVector(2.75f, 9.5f, 4.0f));
	plataforma->SetRelativeRotation(FRotator(0.f, 90.f, 0.0f));
	
	// Inicializar el estado actual como Inmovil
	EstadoActual = CreateDefaultSubobject<AEstrategiaInmovil>(TEXT("EstadoInmovil"));
	TiempoTranscurrido = 0.0f;
	
}

// Called when the game starts or when spawned
void APlataforma::BeginPlay()
{
	Super::BeginPlay();
	// Actualiza el estado 
	ActualizarEstado(DeltaTime);

	// Ejecuta el comportamiento 
	EstadoActual->EjecutarComportamiento(this, DeltaTime);
	
}

// Called every frame
void APlataforma::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	
}
void APlataforma::ActualizarEstado(float DeltaTime)
{
	// Contar el tiempo y cambiar de estado cada 5 segundos
	TiempoTranscurrido += DeltaTime;
	if (TiempoTranscurrido >= 5.0f)
	{
		// Cambiar de estado aleatoriamente
		int EstadoAleatorio = FMath::RandRange(0, 3);
		switch (EstadoAleatorio)
		{
		case 0: CambiarEstado(CreateDefaultSubobject<AEstrategiaInmovil>(TEXT("EstadoInmovil"))); break;
		case 1: CambiarEstado(CreateDefaultSubobject<AEstadoVolar>(TEXT("EstadoVolar"))); break;
		case 2: CambiarEstado(CreateDefaultSubobject<AEstadoCaer>(TEXT("EstadoCaer"))); break;
		case 3: CambiarEstado(CreateDefaultSubobject<AEstadoIrAOOrigen>(TEXT("EstadoIrAOOrigen"))); break;
		}
		TiempoTranscurrido = 0.0f; // Reiniciar el temporizador
	}
}

void APlataforma::CambiarEstado(IIPlataforma* NuevoEstado)
{
	EstadoActual = NuevoEstado;
}

void APlataforma::DetenerMovimiento() { }
void APlataforma::MoverAbajo() {  }
void APlataforma::MoverArriba() { }
void APlataforma::VolverAOrigen() { }


//void APlataforma::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
//{
//	ABarrilExplosivo* barril = Cast<ABarrilExplosivo>(OtherActor);
//	GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Magenta, FString::Printf(TEXT("Coliciono la plataforma")));
//	if (barril) {
//		GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Magenta, FString::Printf(TEXT("Coliciono el barril")));
//		barril->DireccionMovimiento *= -1;
//	}
//}


