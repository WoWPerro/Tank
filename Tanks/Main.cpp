#include "SDL.h"
#include "GameState.h"
#include "GameStateManager.h"
#include "Menu.h"
#include "VideoState.h"

int main(int argc, char *argv[])
{

	GameStateManager manager;
	manager.SetState(new VideoState());
	manager.GameLoop();
	return 0;
	

}