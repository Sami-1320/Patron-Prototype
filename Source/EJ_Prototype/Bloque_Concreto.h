
#pragma once
#include "CoreMinimal.h"
#include "Bloque.h"
#include "Bloque_Concreto.generated.h"

UCLASS()
class EJ_PROTOTYPE_API ABloque_Concreto : public ABloque
{
    GENERATED_BODY()
public:
    ABloque_Concreto();
    virtual ABloque* Clone() const override;

private:
    static FVector LastCloneLocation; // Última posición conocida de un clon
    static bool FirstClone; // Indicador para el primer clon
};