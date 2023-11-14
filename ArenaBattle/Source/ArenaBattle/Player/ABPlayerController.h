// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "ABPlayerController.generated.h"

/**
 * �Է��� ��Ʈ�ѷ������� �������� �����ѵ� gtaó�� �������� ���� �ϴ� �����̶�� 
 * ���Ǹ� ���ϴ� ������ �Է½ý����� �����ϴ°� ���� �ڵ尡 �����
 * ����� -> �Է¸������ؽ�Ʈ -> �׼� -> ���ӷ���
 */
UCLASS()
class ARENABATTLE_API AABPlayerController : public APlayerController
{
	GENERATED_BODY()
	
protected:
	virtual void BeginPlay() override;
	
};
