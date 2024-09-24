// Fill out your copyright notice in the Description page of Project Settings.


#include "Mono.h"
#include "Proyectil.h"

// Sets default values
AMono::AMono()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	static ConstructorHelpers::FObjectFinder<UStaticMesh> puertaMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Cone.Shape_Cone'"));
	// Crear el componente de malla est?tica
	puerta = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("puerta"));
	//SetStaticMesh() asigna una malla estatica a la instancia
	//CubeMeshAsset.Object obtiene el objeto malla y lo asigna a la instancia
	puerta->SetStaticMesh(puertaMesh.Object);
	// Establecer el componente de malla como el componente ra?z
	SetRootComponent(puerta);
	//Modifica la forma del objeto

	intervalo = 0.0f;
}

// Called when the game starts or when spawned
void AMono::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void AMono::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	intervalo += DeltaTime;
	if (intervalo >= 2) {
		SpawnProyectil();
		intervalo = 0;
	}
}

void AMono::SpawnProyectil()
{
	ProjectileClass = AProyectil::StaticClass();
	if (ProjectileClass)
	{
		// Obtener la ubicaci?n y rotaci?n del jugador
		FVector SpawnLocation = GetActorLocation() + GetActorForwardVector() * 100; // Ajustar la distancia de spawn
		FRotator SpawnRotation = GetActorRotation();

		// Par?metros de spawn
		FActorSpawnParameters SpawnParams;
		SpawnParams.Owner = this;
		SpawnParams.Instigator = GetInstigator();
		// Spawnear el proyectil
		while (true) {
			disparos = FMath::RandRange(-1, 1);
			if (disparos != 0) {
				break;
			}
		}
		FVector ForwardDirection = FVector(0.0f, disparos, 0.0f);
		AProyectil* SpawnedProjectile1 = GetWorld()->SpawnActor<AProyectil>(ProjectileClass, SpawnLocation, SpawnRotation, SpawnParams);
		SpawnedProjectile1->Initialize(ForwardDirection);
		//ForwardDirection = FVector(0.0f, disparos, 0.0f);
		//AProyectil* SpawnedProjectile2 = GetWorld()->SpawnActor<AProyectil>(ProjectileClass, SpawnLocation, SpawnRotation, SpawnParams);
		//SpawnedProjectile2->Initialize(ForwardDirection);
	}
}


