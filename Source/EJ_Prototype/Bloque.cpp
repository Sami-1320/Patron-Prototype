
#include "Bloque.h"
#include "Components/StaticMeshComponent.h"
#include "Engine/StaticMesh.h"
#include "Kismet/GameplayStatics.h"

ABloque::ABloque()
{
    PrimaryActorTick.bCanEverTick = true;
    Resistencia = 100.0f;
    Velocidad = 50.0f;
    Nombre = TEXT("BloqueBase");
    MeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshComponent"));
    RootComponent = MeshComponent;
    static ConstructorHelpers::FObjectFinder<UStaticMesh> MeshAsset(TEXT("/Script/Engine.StaticMesh'/Game/StarterContent/Shapes/Shape_Cube.Shape_Cube'"));
    if (MeshAsset.Succeeded())
    {
        MeshComponent->SetStaticMesh(MeshAsset.Object);
    }
}

void ABloque::BeginPlay()
{
    Super::BeginPlay();
}

void ABloque::DisplayAttributes() const
{
    FVector Location = GetActorLocation();
    FString Message = FString::Printf(
        TEXT("Nombre: %s, Resistencia: %.2f, Velocidad: %.2f, Posicion: (X: %.2f, Y: %.2f, Z: %.2f)"),
        *Nombre, Resistencia, Velocidad, Location.X, Location.Y, Location.Z
    );
    GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Green, Message);
}