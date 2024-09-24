// Fill out your copyright notice in the Description page of Project Settings.

#include "MuroCongelado.h"
#include "DonkeyKong_USFXCharacter.h"
#include "UObject/ConstructorHelpers.h"
#include "Components/StaticMeshComponent.h"
#include "Particles/ParticleSystemComponent.h"
#include "GameFramework/CharacterMovementComponent.h"

AMuroCongelado::AMuroCongelado()
{
    // Configuraci?n del material del muro
    MuroMesh->SetMaterial(0, LoadObject<UMaterial>(nullptr, TEXT("Material'/Game/StarterContent/Materials/M_Basic_Floor.M_Basic_Floor'")));

    // Crear el sistema de part?culas
    ParticleSystem = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("ParticleSystem"));
    ParticleSystem->SetupAttachment(RootComponent);

    static ConstructorHelpers::FObjectFinder<UParticleSystem> ParticleSystemAsset(TEXT("ParticleSystem'/Game/StarterContent/Particles/P_Steam_Lit.P_Steam_Lit'"));
    if (ParticleSystemAsset.Succeeded())
    {
        ParticleSystem->SetTemplate(ParticleSystemAsset.Object);
    }

    // Habilitar la detecci?n de superposici?n
    MuroMesh->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
    MuroMesh->SetCollisionObjectType(ECollisionChannel::ECC_WorldStatic);
    MuroMesh->SetCollisionResponseToAllChannels(ECR_Overlap);

    // Vincular la funci?n de superposici?n
    MuroMesh->OnComponentBeginOverlap.AddDynamic(this, &AMuroCongelado::OnOverlapBegin);
}

void AMuroCongelado::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
    mensaje();
    // Verificar si el Actor que colision? es del tipo ADonkeyKong_USFXCharacter
    ADonkeyKong_USFXCharacter* DonkeyKongCharacter = Cast<ADonkeyKong_USFXCharacter>(OtherActor);
    if (DonkeyKongCharacter)
    {
        // Puedes acceder a las funciones o variables del personaje ahora
        DonkeyKongCharacter->GetCharacterMovement()->MaxWalkSpeed = 0.0f;
    }
}

void AMuroCongelado::mensaje()
{
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Blue, FString::Printf(TEXT("Tocaste el muro congelado")));
}
