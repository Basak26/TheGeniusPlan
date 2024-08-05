// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "MainHallHUD.generated.h"

/**
 * 
 */
UCLASS()
class THEGENIUSPLAN_API AMainHallHUD : public AHUD
{
	GENERATED_BODY()

public:
	virtual void BeginPlay() override;

protected:
    // �������Ʈ���� ���� ���� Ŭ������ ������ �����ϱ� ���� UPROPERTY
    UPROPERTY(EditAnywhere, Category = "HUD")
    TSubclassOf<class UUserWidget> HUDWidgetClass;

private:
    // ȭ�鿡 �߰��� ������ �ν��Ͻ��� �����ϱ� ���� ������
    UUserWidget* CurrentWidget;
	
};
