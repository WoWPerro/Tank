#pragma once
#include "GameState.h"
class Pause : public Gamestate
{
public:
	Pause();
	void Input() override;
	void Update() override;
	void Draw() override;
	void Init(Platform * platform) override;
	void Close() override;
	~Pause();
};

