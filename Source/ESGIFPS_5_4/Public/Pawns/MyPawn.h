#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"

#include "MyPawn.generated.h"

class USpringArmComponent;
class UCameraComponent;

UCLASS()
class ESGIFPS_5_4_API AMyPawn : public APawn
{
	GENERATED_BODY()

public:
	AMyPawn();
	virtual void Tick(float DeltaTime) override;
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;


protected:
	virtual void BeginPlay() override;


private:
	UPROPERTY(VisibleAnywhere, Category = "Components")
	USpringArmComponent* SpringArm;

	UPROPERTY(VisibleAnywhere, Category = "Components")
	UCameraComponent* Camera;

	int8 test;

};
