#include "Game.h"
#include <iostream>

Game::Game()
{
}

void Game::Input()
{
	std::cout << "Gamestate Game Input";
}

void Game::Update()
{
	std::cout << "Gamestate Game Update";
}

void Game::Draw()
{
	std::cout << "Gamestate Game Draw";
}

void Game::Init()
{
	std::cout << "Gamestate Game Init";
}

Game::~Game()
{
}
