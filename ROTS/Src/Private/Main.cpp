#pragma once

#include <SDL2/SDL.h>

int main(int argc, char* argv[]) {
	SDL_Window* gWindow;
	SDL_Surface* gScreenSurface;

	// Initialise
	if (SDL_Init(SDL_INIT_VIDEO) < 0) {
		printf("SDL could not initialize! SDL_Error: %s\n", SDL_GetError());

		return EXIT_FAILURE;
	}

	gWindow = SDL_CreateWindow("ROTS", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, 1920, 1080, SDL_WINDOW_FULLSCREEN);

	if (!gWindow) {
		printf("Window could not be created! SDL_Error: %s\n", SDL_GetError());
		return EXIT_FAILURE;
	}

	gScreenSurface = SDL_GetWindowSurface(gWindow);

	// Process game
	while (true) {
		break;
	}

	// Quit framework
	SDL_FreeSurface(gScreenSurface);
	SDL_DestroyWindow(gWindow);
	gWindow = nullptr;

	SDL_Quit();

	return 0;
}