#include "Configuration.h"
#include <iostream>


Configuration::Configuration()
{
}

bool Configuration::Input(int keyInput)
{
	std::cout << "Gamestate Configuration Input";
	return false;
}

void Configuration::Update()
{
	std::cout << "Gamestate Configuration Update";
}

void Configuration::Draw()
{
	std::cout << "Gamestate Configuration Draw";
}

void Configuration::Init(Platform * platform)
{
	std::cout << "Gamestate Configuration Init";
}

void Configuration::Close()
{
	std::cout << "Gamestate Configuration Close";
}

Configuration::~Configuration()
{
}
