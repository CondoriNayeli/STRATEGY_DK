// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
<<<<<<< HEAD
#include "IPlataforma.h"
=======
>>>>>>> b1073442ac5c2ec9cdf7ee2421ed155a38262979
#include "Plataforma.generated.h"

UCLASS()
class DONKEYKONG_USFX_API APlataforma : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	APlataforma();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

<<<<<<< HEAD
private:
	// Referencia al estado actual de la plataforma
	UPROPERTY()
	IIPlataforma* EstadoActual;

	APlataforma* plataforma;

	// M�todo para cambiar de estado
	void CambiarEstado(IIPlataforma* NuevoEstado);

	// M�todos de comportamiento
	void DetenerMovimiento();
	void MoverAbajo();
	void MoverArriba();
	void VolverAOrigen();

	// Temporizador
	float TiempoTranscurrido;
	void ActualizarEstado(float DeltaTime);

	//UPROPERTY(VisibleAnywhere)
	//UStaticMeshComponent* plataforma;
=======
	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* plataforma;
>>>>>>> b1073442ac5c2ec9cdf7ee2421ed155a38262979

	//UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	//class UBoxComponent* plataformaCollision;

<<<<<<< HEAD
//private:
//	FVector posicionInicialZ;
//	FVector posicionActualZ;
//	FVector posicionFinalZ;
//	float incremento;
//	bool moverse;
//	bool z;
//	FVector posicionInicialY;
//	FVector posicionActualY;
//	FVector posicionFinalY;
//	bool y;
//public:
//	// Called every frame
//	virtual void Tick(float DeltaTime) override;
//
//	void movimientoY();
//	void movimientoZ();
//	FORCEINLINE bool GetMoverseY() { return y; }
//	FORCEINLINE void SetMoverseY(bool m = false) { y = m; }
//	FORCEINLINE bool GetMoverseZ() { return z; }
//	FORCEINLINE void SetMoverseZ(bool m = false) { z = m; }
=======
private:
	FVector posicionInicialZ;
	FVector posicionActualZ;
	FVector posicionFinalZ;
	float incremento;
	bool moverse;
	bool z;
	FVector posicionInicialY;
	FVector posicionActualY;
	FVector posicionFinalY;
	bool y;
public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	void movimientoY();
	void movimientoZ();
	FORCEINLINE bool GetMoverseY() { return y; }
	FORCEINLINE void SetMoverseY(bool m = false) { y = m; }
	FORCEINLINE bool GetMoverseZ() { return z; }
	FORCEINLINE void SetMoverseZ(bool m = false) { z = m; }
>>>>>>> b1073442ac5c2ec9cdf7ee2421ed155a38262979

	//UFUNCTION()
	//void OnOverlapBegin(
	//	UPrimitiveComponent* OverlappedComp,
	//	AActor* OtherActor,
	//	UPrimitiveComponent* OtherComp,
	//	int32 OtherBodyIndex,
	//	bool bFromSweep,
	//	const FHitResult& SweepResult);
};
