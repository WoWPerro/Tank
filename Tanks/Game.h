#pragma once
#include "GameState.h"
class Game : public Gamestate
{
public:
	Game();
	void Input() override;
	void Update() override;
	void Draw() override;
	void Init() override;
	~Game();
};

