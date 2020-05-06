#pragma once

#include <typeinfo>
#include "EngineMinimal.h"
#include "EngineGlobals.h"
#include "Runtime/Engine/Classes/Engine/GameEngine.h"

DECLARE_LOG_CATEGORY_EXTERN(Choi, Log, All);
#define LOG_CALLINFO   (FString(__FUNCTION__) + TEXT("(") + FString::FromInt(__LINE__) + TEXT(")"))
#define LOG_INFO(Verbosity) UE_LOG(Choi,Verbosity,TEXT("%s"),*LOG_CALLINFO)
#define LOG(Verbosity,format,...)  UE_LOG(Choi,Verbosity,TEXT("%s %s"),*LOG_CALLINFO,*FString::Printf(format, ##__VA_ARGS__))

enum MOVE_DIR
{
	MD_NONE = -1,
	MD_FORWARD,
	MD_BACK,
	MD_RIGHT,
	MD_LEFT
};

enum VIEWPORT_MSG_TYPE
{
	VT_NORMAL,
	VT_WARNING,
	VT_CRITICAL
};

enum PLAYER_ANIM_TYPE
{
	IDLE,
	RUN,
	JUMP,
	ATTACK_END,
	LAND,
	DEATH,
	END,
};

enum PLAYER_ATT_TYPE
{
	PAT_ATTACK = END,
	PAT_ATTACK2,
	PAT_ATTACK3,
	PAT_ATTACK4,
};

enum MONSTER_ANIM_TYPE
{
	MAT_IDLE,
	MAT_RUN,
	MAT_ATTACK,
	MAT_ATTACK2,
	MAT_HIT,
	MAT_DEATH
};

void PrintViewport(float _fTime, const FString& _text, VIEWPORT_MSG_TYPE _eType);
void PrintViewport(float _fTime, const FString& _text, const FColor& _tColor);