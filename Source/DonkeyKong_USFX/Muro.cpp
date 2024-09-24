// Fill out your copyright notice in the Description page of Project Settings.


#include "Muro.h"
#include "UObject/ConstructorHelpers.h"
#include "Components/StaticMeshComponent.h"
#include "Components/BoxComponent.h"
#include "Particles/ParticleSystemComponent.h"

// Sets default values
AMuro::AMuro()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//establece el componenete raiz de la malla
	static ConstructorHelpers::FObjectFinder<UStaticMesh> Muro(TEXT("StaticMesh'/Game/StarterContent/Architecture/Wall_400x300.Wall_400x300'"));
	// Crear el componente de malla est?tica
	//Mallas de la clase
	MuroMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Malla_MuroElectrico"));
	MuroMesh->SetStaticMesh(Muro.Object);
	MuroMesh->SetRelativeScale3D(FVector(0.5, 0.5, 1.0));
	MuroMesh->SetRelativeRotation(FRotator(90.0f, 0.0f, 0.0f));
	RootComponent = MuroMesh;

	MuroColision = CreateDefaultSubobject<UBoxComponent>(TEXT("Barril_Colision"));
	MuroColision->SetBoxExtent(FVector(200.0f, 30.0f, 150.0f));
	MuroColision->SetRelativeLocation(FVector(215.0f, 0.0f, 150.0f));
	MuroColision->SetVisibility(true);
	MuroColision->SetupAttachment(GetRootComponent());
}

// Called when the game starts or when spawned
void AMuro::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void AMuro::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AMuro::mensaje()
{
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Mensaje"));
}






