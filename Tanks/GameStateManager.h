#pragma once
#include "GameState.h"
#include <stack>

class GameStateManager
{
private:
	std::stack<Gamestate *> states;
public:
	GameStateManager();
	~GameStateManager();
	void GameLoop();
	void SetState(Gamestate *state);
};

