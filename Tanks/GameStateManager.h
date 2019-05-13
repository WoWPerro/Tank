#pragma once
#include "GameState.h"
#include <stack>
#include "Platform.h"

class GameStateManager
{
private:
	std::stack<Gamestate *> states;
	Platform * plataform;

public:
	GameStateManager();
	~GameStateManager();
	void GameLoop();
	void SetState(Gamestate *state);
	void RealeaseState();
};

