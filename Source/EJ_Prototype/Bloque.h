
#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Bloque.generated.h"

UCLASS(Abstract)
class EJ_PROTOTYPE_API ABloque : public AActor
{
    GENERATED_BODY()
public:
    ABloque(); //declaracion del constructor   

	//Atributos
    float Resistencia;
    float Velocidad;
    FString Nombre;
    
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
    class UStaticMeshComponent* MeshComponent;//puntero a la malla

    UFUNCTION(BlueprintCallable, Category = "Prototype")
    virtual ABloque* Clone() const PURE_VIRTUAL(ABloque::Clone, return nullptr;);
	/*una funcion virtual clonne con un puntero a un objeto de tipo ABloque, y const indica que la funcion no 
    modifica al objeto*/ 
    
    UFUNCTION(BlueprintCallable, Category = "Prototype")
    void DisplayAttributes() const;


protected:
    virtual void BeginPlay() override;
};