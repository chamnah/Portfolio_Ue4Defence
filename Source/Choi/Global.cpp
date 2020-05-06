#include "Global.h"

DEFINE_LOG_CATEGORY(Choi)

void PrintViewport(float _fTime, const FString & _text, VIEWPORT_MSG_TYPE _eType)
{
	FColor Color;
	switch (_eType)
	{
	case VT_NORMAL:
		Color = FColor::Green;
		break;
	case VT_WARNING:
		Color = FColor::Yellow;
		break;
	case VT_CRITICAL:
		Color = FColor::Red;
		break;
	default:
		Color = FColor::White;
		break;
	}
	GEngine->AddOnScreenDebugMessage(-1, _fTime, Color, _text);
}

void PrintViewport(float _fTime, const FString & _text, const FColor & _tColor)
{
	GEngine->AddOnScreenDebugMessage(-1, _fTime, _tColor, _text);
}
