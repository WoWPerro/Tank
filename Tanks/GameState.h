#pragma once
#include "Platform.h"

class Gamestate
{
public:
	virtual void Input() = 0;
	virtual void Update() = 0;
	virtual void Draw() = 0;
	virtual void Init(Platform * platform) = 0;
	virtual void Close() = 0;
};
