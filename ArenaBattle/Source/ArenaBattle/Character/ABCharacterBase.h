// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "ABCharacterBase.generated.h"

UENUM()
enum class ECharacterControlType : uint8
{
	Shoulder,
	Quater
};

UCLASS()
class ARENABATTLE_API AABCharacterBase : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AABCharacterBase();

protected:
	virtual void SetCharacterControlData(const class UABCharacterControlData* CharacterControlData);

	UPROPERTY(EditAnywhere, Category = CharacterControl, Meta = (AllowPrivateAccess = "true"))
	TMap<ECharacterControlType, class UABCharacterControlData*> CharacterControlManager;

//Combo Attack Section
protected:

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Animation)
	TObjectPtr<class UAnimMontage> ComboActionMontage;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Attack, Meta = (AllowPrivateAccess = "true"))
	TObjectPtr<class UABComboAttackData> ComboActionData;

	void ProcessComboCommand();

	void ComboActionBegin();
	// 인자는 FOnMontageEnded 라는 델레게이트 인자 맞춰준것
	void ComboActionEnd(class UAnimMontage* TargetMontage, bool IsProperlyEnded);

	void SetComboCheckTimer();
	void ComboCheck();

	// 현재 어느 콤보인지 (내부에서만 사용할 것 이기때문에 UPROPERTY 안함) // 0 이면 아직 시작 X
	int32 CurrentCombo = 0;
	// 콤보기능을위한 타이머
	FTimerHandle ComboTimerHandle;
	bool HasNextComboCommand = false;
	
};
