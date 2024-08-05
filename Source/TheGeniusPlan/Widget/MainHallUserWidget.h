// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "MainHallUserWidget.generated.h"

/**
 * 
 */
UCLASS()
class THEGENIUSPLAN_API UMainHallUserWidget : public UUserWidget
{
	GENERATED_BODY()

protected:
    virtual void NativeConstruct() override;

    UPROPERTY(meta = (BindWidget))
    class UButton* Button_Help;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Widgets")
    TSubclassOf<UUserWidget> HelpWidgetClass; // HelpWidgetClass�� �����ϰ� �����Ϳ��� ���� �����ϵ��� ��

private:
    UFUNCTION()
    void OnHelpButtonClicked();
};
