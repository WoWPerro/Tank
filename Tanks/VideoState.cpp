#include "VideoState.h"
#include <iostream>


VideoState::VideoState()
{
}

void VideoState::Init(Platform * platform)
{
	std::cout << "Gamestate Video Input";
	this->platform = platform;
	background = new Image();
	background->LoadImage("../Assets/Images/tankMenu.png");
}

bool VideoState::Input(int keyInput)
{
	std::cout << "Gamestate Video Input";
	return false;
}

void VideoState::Update()
{
	std::cout << "Gamestate Video Input";
}

void VideoState::Draw()
{
	std::cout << "Gamestate Video Input";
	platform->RenderClear();
	platform->RenderImage(background, 0, 0);
	platform->RenderPresent();
}

void VideoState::Close()
{
	std::cout << "Gamestate Video Close";
}

VideoState::~VideoState()
{
}
