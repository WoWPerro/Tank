#pragma once
#include "GameState.h"
#include "Image.h"
class Menu : public Gamestate
{
private:
	Image *Background;
	Platform *platform;
public:
	Menu();
	void Input() override;
	void Update() override;
	void Draw() override;
	void Init(Platform * platform) override;
	void Close() override;
	~Menu();
};

