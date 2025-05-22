
#include "Bloque_Acero.h"
#include "Components/StaticMeshComponent.h"
#include "Engine/StaticMesh.h"
#include "Materials/Material.h"

ABloque_Acero::ABloque_Acero()
{
    Resistencia = 500.0f;
    Velocidad = 20.0f;
    Nombre = TEXT("BloqueAcero");
    static ConstructorHelpers::FObjectFinder<UMaterial> MaterialAsset(TEXT("/Script/Engine.Material'/Game/StarterContent/Materials/M_Metal_Steel.M_Metal_Steel'"));
    if (MaterialAsset.Succeeded())
    {
        MeshComponent->SetMaterial(0, MaterialAsset.Object);
    }
}

ABloque* ABloque_Acero::Clone() const
{
    ABloque_Acero* NewBlock = GetWorld()->SpawnActor<ABloque_Acero>(GetClass(), GetActorLocation(), GetActorRotation());
    if (NewBlock)
    {
        NewBlock->Resistencia = Resistencia;
        NewBlock->Velocidad = Velocidad;
        NewBlock->Nombre = Nombre;
    }
    return NewBlock;
}