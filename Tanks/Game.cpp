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

void Game::Init(Platform * platform)
{
	std::cout << "Gamestate Game Init";
}

void Game::Close()
{
	std::cout << "Gamestate Game Close";
}

Game::~Game()
{
}
