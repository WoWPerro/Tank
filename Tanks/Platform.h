#pragma once
#include <string>
#include "SDL.h"
#include "Image.h"

class Gamestate;

class Platform
{
private:
	int width;
	int height;
	SDL_Window *window;
	
public:
	static SDL_Renderer *renderer;
	Platform(std::string name);
	void RenderClear();
	void RenderPresent();
	void RenderImage(Image *image, int x, int y);
	void CheckEvent(Gamestate *obj, bool (Gamestate::*f)(int));
private:
	void RenderTexture(Image * image, int x, int y, double a);
	~Platform();
};

