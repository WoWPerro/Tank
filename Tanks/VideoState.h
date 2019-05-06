#pragma once
#include "GameState.h"
class VideoState : public Gamestate
{
public:
	VideoState();
	void Input() override;
	void Update() override;
	void Draw() override;
	void Init() override;
	~VideoState();
};

