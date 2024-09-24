// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "DonkeyKong_USFXGameMode.generated.h"

UCLASS(minimalapi)
class ADonkeyKong_USFXGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	ADonkeyKong_USFXGameMode();

protected:
	virtual void BeginPlay() override;

public:
	virtual void Tick(float DeltaTime) override;

	TArray<AActor*> Plataformas;
	TArray<AActor*> Barriles;
	TArray<AActor*> Parkour;
	TArray<AActor*> Enemigos;
	FVector Posicion;
	FRotator Rotacion;
	FVector Spawn;
	FVector Aparicion;
	float signo;
	float tiempo;
	float constant_z;
	int random;
	int desicion;
	int componentes;
	int movimiento;
	int ID;
	AActor* destruir = nullptr;

	//enemigos
	FVector enemigoAleatorio;
	int enemigosCant;
	float z;
	float y;
	int control;
	/*void GenerarEnemigos();*/

protected:
	TArray<TSubclassOf<class AMuro>> Paredes;

	float Timer;

	void GenerarParedesAleatorias();

	int32 IndiceAleatorio;

	TSubclassOf<class AMuro> ParedesAleatorias;
	FVector UbicacionAleatoria;
	int PlataformaAleatoria;
	int CantidadMuros;

	//parcial
	int aux;
	int verificar;
	AActor* Destruir;
	int contador;
};



