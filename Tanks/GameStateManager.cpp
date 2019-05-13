#include "GameStateManager.h"
#include <iostream>
#include "Platform.h"

GameStateManager::GameStateManager()
{
	plataform = new Platform("Tank");
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
	state->Init(plataform);
	states.push(state);
}

void GameStateManager::RealeaseState()
{
	while (true) 
	{
		try
		{
			if (states.size() == 0)
				throw std::exception("Error");
			auto state = states.top();
			state->Close();
			states.pop();
		}
		catch (...)
		{
			std::cout << "Critical error Tank is closing";
			break;
		}
	}
}

GameStateManager::~GameStateManager()
{
}
