// Fill out your copyright notice in the Description page of Project Settings.


#include "Animation/AnimNotify_AttackHitCheck.h"
//#include "Character/ABCharacterBase.h" // 노티파이는 공용으로사용하는게 좋은데 헤더추가하면 의존성 생김 // 인터페이스로구현 
#include "Interface/ABAnimationAttackInterface.h"


void UAnimNotify_AttackHitCheck::Notify(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, const FAnimNotifyEventReference& EventReference)
{
	Super::Notify(MeshComp, Animation, EventReference);
	if (MeshComp)
	{
		// 오너 클래스를 직접 받지않고 인터페이스를 구현했는지 체크 // 어쨌든 상속이니깐
		IABAnimationAttackInterface* AttackPawn = Cast<IABAnimationAttackInterface>(MeshComp->GetOwner());
		if(AttackPawn)
		{
			AttackPawn->AttackHitCheck();
		}
	}
}
