
#include "Bloque_Concreto.h"
#include "Components/StaticMeshComponent.h"
#include "Engine/StaticMesh.h"
#include "Materials/Material.h"

ABloque_Concreto::ABloque_Concreto()
{
    Resistencia = 300.0f;
    Velocidad = 30.0f;
    Nombre = TEXT("BloqueConcreto");
    static ConstructorHelpers::FObjectFinder<UMaterial> MaterialAsset(TEXT("/Script/Engine.Material'/Game/StarterContent/Materials/M_Concrete_Grime.M_Concrete_Grime'"));
    if (MaterialAsset.Succeeded())
    {
        MeshComponent->SetMaterial(0, MaterialAsset.Object);
    }
}

ABloque* ABloque_Concreto::Clone() const
{
    ABloque_Concreto* NewBlock = GetWorld()->SpawnActor<ABloque_Concreto>(GetClass(), GetActorLocation(), GetActorRotation());
    if (NewBlock)
    {
        NewBlock->Resistencia = Resistencia;
        NewBlock->Velocidad = Velocidad;
        NewBlock->Nombre = Nombre;
    }
    return NewBlock;
}