#pragma once
#include "GameState.h"
class Game : public Gamestate
{
public:
	Game();
	bool Input(int keyInput) override;
	void Update() override;
	void Draw() override;
	void Init(Platform * platform) override;
	void Close() override;
	~Game();
};

