#include "GameStateManager.h"



GameStateManager::GameStateManager()
{
}

void GameStateManager::GameLoop()
{
	while (true)
	{
		auto state = states.top();
		state->Input();
		state->Update();
		state->Draw();
	}
}

void GameStateManager::SetState(Gamestate *state)
{
	state->Init();
	states.push(state);
}

GameStateManager::~GameStateManager()
{
}
