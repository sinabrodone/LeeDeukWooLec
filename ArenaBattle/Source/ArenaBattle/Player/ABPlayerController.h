// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "ABPlayerController.generated.h"

/**
 * 입력은 컨트롤러에서도 폰에서도 가능한데 gta처럼 여러개에 빙의 하는 게임이라면 
 * 빙의를 당하는 폰에서 입력시스템을 설정하는게 좋음 코드가 길어짐
 * 사용자 -> 입력매핑컨텍스트 -> 액션 -> 게임로직
 */
UCLASS()
class ARENABATTLE_API AABPlayerController : public APlayerController
{
	GENERATED_BODY()
	
protected:
	virtual void BeginPlay() override;
	
};
