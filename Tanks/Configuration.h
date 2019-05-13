#pragma once
#include "GameState.h"
class Configuration : public Gamestate
{
public:
	Configuration();
	void Input() override;
	void Update() override;
	void Draw() override;
	void Init(Platform * platform) override;
	void Close() override;
	~Configuration();
};

