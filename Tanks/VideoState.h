#pragma once
#include "GameState.h"
class VideoState : public Gamestate
{
public:
	VideoState();
	bool Input(int keyInput) override;
	void Update() override;
	void Draw() override;
	void Init(Platform * platform) override;
	void Close() override;
private:
	Platform * platform;
	Image * background;
	~VideoState();
};

