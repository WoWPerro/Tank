#pragma once

class Gamestate
{
public:
	virtual void Input() = 0;
	virtual void Update() = 0;
	virtual void Draw() = 0;
	virtual void Init() = 0;
};
