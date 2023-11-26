// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ABUserWidget.h"
#include "ABHpBarWidget.generated.h"

/**
 * UABUserWidget 상속받아서 OwningActor 사용가능
 */
UCLASS()
class ARENABATTLE_API UABHpBarWidget : public UABUserWidget
{
	GENERATED_BODY()
	
public:
	// 위젯은 생성자가 인자를 가짐 특이함
	UABHpBarWidget(const FObjectInitializer& ObjectInitializer);

protected:
	// 이 함수 호출될때는 UI관련된 모든 기능들이 거의 초기화가 완료됐음
	virtual void NativeConstruct() override;


public:
	FORCEINLINE void SetMaxHp(float NewMaxHp) { MaxHp = NewMaxHp; }
	void UpdateHpBar(float NewCurrentHp);


protected:
	UPROPERTY()
	TObjectPtr<class UProgressBar> HpProgressBar;

	UPROPERTY()
	float MaxHp;
};
