#include "Pause.h"
#include <iostream>


Pause::Pause()
{
}

void Pause::Input()
{
	std::cout << "Gamestate Pause Input";
}

void Pause::Update()
{
	std::cout << "Gamestate Pause Update";
}

void Pause::Draw()
{
	std::cout << "Gamestate Pause Input Draw";
}

void Pause::Init(Platform * platform)
{
	std::cout << "Gamestate Pause Init";
}

void Pause::Close()
{
	std::cout << "Gamestate Pause Close";
}

Pause::~Pause()
{
}
