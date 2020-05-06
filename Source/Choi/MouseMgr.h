// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

/**
 * 
 */
class CHOI_API MouseMgr
{
public:
	static MouseMgr* GetInst()
	{
		static MouseMgr mgr;
		return &mgr;
	}

private:
	bool bDrag;
public:
	bool IsDrag() { return bDrag; }
	void SetDrag(bool _bDrag) { bDrag = _bDrag; }
public:
	MouseMgr();
	~MouseMgr();
};
