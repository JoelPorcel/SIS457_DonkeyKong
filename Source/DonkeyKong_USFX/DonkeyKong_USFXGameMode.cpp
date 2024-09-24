// Copyright Epic Games, Inc. All Rights Reserved.

#include "DonkeyKong_USFXGameMode.h"
#include "Plataforma.h"
#include "PlataformaMovible.h"
#include "PlataformaSuvible.h"
#include "Barril.h"
#include "BarrilSaltador.h"
#include "Mono.h"
#include "Muro.h"
#include "MuroCongelado.h"
#include "MuroLadrillo.h"
#include "MuroElectrico.h"
#include "MuroPegajoso.h"
#include "MuroViento.h"
#include "DonkeyKong_USFXCharacter.h"
#include "UObject/ConstructorHelpers.h"

ADonkeyKong_USFXGameMode::ADonkeyKong_USFXGameMode()
{
	PrimaryActorTick.bCanEverTick = true;
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/SideScrollerCPP/Blueprints/SideScrollerCharacter"));
	if (PlayerPawnBPClass.Class != nullptr)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}

	Paredes.Add(AMuroLadrillo::StaticClass());
	Paredes.Add(AMuroCongelado::StaticClass());
	Paredes.Add(AMuroPegajoso::StaticClass());
	Paredes.Add(AMuroElectrico::StaticClass());
	Paredes.Add(AMuroViento::StaticClass());
}

void ADonkeyKong_USFXGameMode::BeginPlay()
{
	contador = 0;
	aux = 0;
	verificar = 0;
	Timer = 0;
	CantidadMuros = 0;
	ID = 0;
	Posicion = FVector(1206.8f, 1700.f, 180.f);
	Rotacion = FRotator(0.0f, 0.0f, 2.0f);
	Spawn = FVector(1280.0f, 1900.0f, 2940.0f);
	random = FMath::RandRange(0, 3);
	enemigosCant = FMath::RandRange(3, 5); //para enemigos
	signo = 1.0f;
	tiempo = 0.0f;
	constant_z = 8.3f;
	for (int i = 0; i < 5; i++) {
		//plataformas
		desicion = FMath::RandRange(1, 2);
		componentes = FMath::RandRange(3, 13);
		for (int t = 10; t >= 1; t--) {
			movimiento = FMath::RandRange(2, 4);
			if (desicion == 1 && t != 1 && i !=4) {
				if (t == movimiento) {
					Posicion += FVector(0.0f, -290.f * signo, constant_z);
					Plataformas.Add(GetWorld()->SpawnActor<APlataformaMovible>(APlataformaMovible::StaticClass(), Posicion, Rotacion));
				}
				else if (t != movimiento) {
					Posicion += FVector(0.0f, -290.f * signo, constant_z);
					Plataformas.Add(GetWorld()->SpawnActor<APlataforma>(APlataforma::StaticClass(), Posicion, Rotacion));
				}
			}
			else {
				if (t == movimiento) {
					Posicion += FVector(0.0f, -290.f * signo, constant_z - constant_z);
					Plataformas.Add(GetWorld()->SpawnActor<APlataformaSuvible>(APlataformaSuvible::StaticClass(), Posicion, FRotator::ZeroRotator));
					aux = Plataformas.Num() - 1;
				}
				else if (t != movimiento) {
					Posicion += FVector(0.0f, -290.f * signo, constant_z - constant_z);
					Plataformas.Add(GetWorld()->SpawnActor<APlataforma>(APlataforma::StaticClass(), Posicion, FRotator::ZeroRotator));
				}
			}
		}
		signo *= -1.0f;
		Posicion += FVector(0.0f, -275 * signo, 400.f);
		Rotacion.Roll *= -1;
		contador = 0;
	}
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Blue, FString::Printf(TEXT("Cantidad de plataformas: %d"), Plataformas.Num()));
	//for (int e=0; e < enemigosCant; e++) {
	//	GenerarEnemigos();
	//}
		enemigoAleatorio = Plataformas[24]->GetActorLocation();
		enemigoAleatorio.Z += 70.f;
		Enemigos.Add(GetWorld()->SpawnActor<AMono>(AMono::StaticClass(), enemigoAleatorio, FRotator::ZeroRotator));
}

void ADonkeyKong_USFXGameMode::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	Timer += DeltaTime;
	if (Timer >= 3 && CantidadMuros<4) {
		GenerarParedesAleatorias();
		Timer = 0;
		CantidadMuros++;
	}
	//Barriles
	Spawn = FVector(1280.0f, 1900.0f, 2980.0f);
	random = FMath::RandRange(1, 10);
	tiempo += DeltaTime;
	if (Barriles.Num() < 30 && tiempo >= 5 && random >= 1 && random <= 7) {
		Barriles.Add(GetWorld()->SpawnActor<ABarril>(ABarril::StaticClass(), Spawn, FRotator::ZeroRotator));
		tiempo = 0;
	}
	else if (Barriles.Num() < 30 && tiempo >= 5 && random >= 8) {
		Barriles.Add(GetWorld()->SpawnActor<ABarrilSaltador>(ABarrilSaltador::StaticClass(), Spawn, FRotator::ZeroRotator));
		tiempo = 0;
	}

}

//void ADonkeyKong_USFXGameMode::GenerarEnemigos()
//{
//	PlataformaAleatoria = FMath::RandRange(1, Plataformas.Num());
//	if (Plataformas.IsValidIndex(PlataformaAleatoria) && Plataformas[PlataformaAleatoria] != nullptr) {
//		enemigoAleatorio = Plataformas[PlataformaAleatoria]->GetActorLocation();
//		enemigoAleatorio.Z += 70.f;
//		Enemigos.Add(GetWorld()->SpawnActor<AMono>(AMono::StaticClass(), enemigoAleatorio, FRotator::ZeroRotator));
//	}
//}

void ADonkeyKong_USFXGameMode::GenerarParedesAleatorias()
{
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Blue, FString::Printf(TEXT("Aparece pared")));
	PlataformaAleatoria = FMath::RandRange(1, Plataformas.Num());
	if (Plataformas.IsValidIndex(PlataformaAleatoria) && Plataformas[PlataformaAleatoria] != nullptr) {
		UbicacionAleatoria = Plataformas[PlataformaAleatoria]->GetActorLocation();
		UbicacionAleatoria.Z += 50.f;
		UbicacionAleatoria.X += 180.f;
		if (Paredes.Num() > 0 && CantidadMuros < 4) {
			IndiceAleatorio = FMath::FRandRange(0, Paredes.Num() - 1);
			ParedesAleatorias = Paredes[IndiceAleatorio];
			if (ParedesAleatorias) {
				GetWorld()->SpawnActor<AMuro>(ParedesAleatorias, UbicacionAleatoria, FRotator::ZeroRotator);
			}
		}
	}
}


/*tiempo += DeltaTime;
if (tiempo >= 0.5f && Plataformap.Num() > 0 ) {
	destruir = Plataformas[Plataformap.Num()-1];
	destruir->Destroy();
	Plataformas.RemoveAt(Plataformas.Num() - 1);
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Blue, FString::Printf(TEXT("Cantidad del contenedor: %d"), Plataformas.Num()));
	tiempo = 00.f;
}*/