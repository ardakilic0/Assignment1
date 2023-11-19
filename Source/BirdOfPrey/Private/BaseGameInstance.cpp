// Fill out your copyright notice in the Description page of Project Settings.

#include "BaseGameInstance.h"

void UBaseGameInstance::SetPlayerAgentInfoFor(int PlayerControllerID, FSAgentInfo& info)
{

}

FSAgentInfo& UBaseGameInstance::GetPlayerAgentInfoFor(int PlayerControllerID, bool& Result)
{
	Value = false;
	return PlayerAgentInfo[PlayerControllerID];
}
