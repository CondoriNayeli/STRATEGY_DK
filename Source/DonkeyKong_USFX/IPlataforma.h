// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "IPlataforma.generated.h"
class APlataforma* Plataforma;
// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UIPlataforma : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class DONKEYKONG_USFX_API IIPlataforma
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	// Método para ejecutar el comportamiento específico del estado
	virtual void EjecutarComportamiento(APlataforma* Plataforma, float DeltaTime) PURE_VIRTUAL(APlataformaState::EjecutarComportamiento, );

};
