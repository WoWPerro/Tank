#include "Menu.h"
#include <iostream>


Menu::Menu()
{
}

void Menu::Init(Platform * platform)

{
	this->platform = platform;
	std::cout << "Gamestate Menu Init";
	Background = new Image;
}

bool Menu::Input(int keyInput)
{
	std::cout << "Gamestate Menu Input";
	return false;
}

void Menu::Update()
{
	std::cout << "Gamestate Menu Update";
}

void Menu::Draw()
{
	std::cout << "Gamestate Menu Draw";
}

void Menu::Close()
{
	std::cout << "Gamestate Menu Close";
}

Menu::~Menu()
{
}
