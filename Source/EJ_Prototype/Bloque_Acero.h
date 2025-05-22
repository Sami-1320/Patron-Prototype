
#pragma once
#include "CoreMinimal.h"
#include "Bloque.h"
#include "Bloque_Acero.generated.h"

UCLASS()
class EJ_PROTOTYPE_API ABloque_Acero : public ABloque
{
    GENERATED_BODY()
public:
    ABloque_Acero();
    virtual ABloque* Clone() const override;

private:
    static FVector LastCloneLocation; // Última posición conocida de un clon
    static bool FirstClone; // Indicador para el primer clon
};