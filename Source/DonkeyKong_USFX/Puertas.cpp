// Fill out your copyright notice in the Description page of Project Settings.


#include "Puertas.h"

// Sets default values
APuertas::APuertas()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	static ConstructorHelpers::FObjectFinder<UStaticMesh> puertaMesh(TEXT("StaticMesh'/Game/StarterContent/Architecture/Wall_Door_400x400.Wall_Door_400x400'"));
	// Crear el componente de malla estática
	puerta = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("puerta"));
	//SetStaticMesh() asigna una malla estatica a la instancia
	//CubeMeshAsset.Object obtiene el objeto malla y lo asigna a la instancia
	puerta->SetStaticMesh(puertaMesh.Object);
	// Establecer el componente de malla como el componente raíz
	SetRootComponent(puerta);
	//Modifica la forma del objeto
	puerta->SetWorldScale3D(FVector(1.0f, 3.0f, 0.5f));
}

// Called when the game starts or when spawned
void APuertas::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APuertas::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

