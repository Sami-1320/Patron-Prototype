

#include "MyPlayerController.h"
#include "Bloque_Acero.h"
#include "Bloque_Concreto.h"
#include "Kismet/GameplayStatics.h"

AMyPlayerController::AMyPlayerController()
{
    SteelBlockPrototype = nullptr;
    ConcreteBlockPrototype = nullptr;
    LastSteelCloneLocation = FVector(0.0f, 0.0f, 100.0f); // Posición inicial del prototipo de acero
    LastConcreteCloneLocation = FVector(0.0f, 200.0f, 100.0f); // Posición inicial del prototipo de concreto
    FirstSteelClone = true;
    FirstConcreteClone = true;
}

void AMyPlayerController::SetupInputComponent()
{
    Super::SetupInputComponent();
    InputComponent->BindAction("CloneSteel", IE_Pressed, this, &AMyPlayerController::OnPressG);
    InputComponent->BindAction("CloneConcrete", IE_Pressed, this, &AMyPlayerController::OnPressH);
    if (!SteelBlockPrototype)
    {
        SteelBlockPrototype = GetWorld()->SpawnActor<ABloque_Acero>(FVector(0.0f, 0.0f, 100.0f), FRotator::ZeroRotator);
        LastSteelCloneLocation = SteelBlockPrototype->GetActorLocation(); // Aseguramos que la posición inicial sea la del prototipo
    }
    if (!ConcreteBlockPrototype)
    {
        ConcreteBlockPrototype = GetWorld()->SpawnActor<ABloque_Concreto>(FVector(0.0f, 200.0f, 100.0f), FRotator::ZeroRotator);
        LastConcreteCloneLocation = ConcreteBlockPrototype->GetActorLocation(); // Aseguramos que la posición inicial sea la del prototipo
    }
}

void AMyPlayerController::OnPressG()
{
    if (SteelBlockPrototype)
    {
        FVector BaseLocation = FirstSteelClone ? SteelBlockPrototype->GetActorLocation() : LastSteelCloneLocation;
        FVector NewLocation = BaseLocation + FVector(200.0f, 0.0f, 0.0f);
        ABloque* ClonedBlock = SteelBlockPrototype->Clone();
        if (ClonedBlock)
        {
            ClonedBlock->SetActorLocation(NewLocation);
            ClonedBlock->DisplayAttributes();
            // Actualizamos la última posición después de asignarla al clon
            LastSteelCloneLocation = NewLocation;
            if (FirstSteelClone)
            {
                FirstSteelClone = false;
            }
        }
    }
}

void AMyPlayerController::OnPressH()
{
    if (ConcreteBlockPrototype)
    {
        FVector BaseLocation = FirstConcreteClone ? ConcreteBlockPrototype->GetActorLocation() : LastConcreteCloneLocation;
        FVector NewLocation = BaseLocation + FVector(200.0f, 0.0f, 0.0f);
        ABloque* ClonedBlock = ConcreteBlockPrototype->Clone();
        if (ClonedBlock)
        {
            ClonedBlock->SetActorLocation(NewLocation);
            ClonedBlock->DisplayAttributes();
            // Actualizamos la última posición después de asignarla al clon
            LastConcreteCloneLocation = NewLocation;
            if (FirstConcreteClone)
            {
                FirstConcreteClone = false;
            }
        }
    }
}