#include <SDL.h>
#include "game.h"
#include "graphics.h"
#include "input.h"

/*
* Game class
* This class holds all information for our main game loop
*/

Game::Game() {
	SDL_Init(SDL_INIT_EVERYTHING);
	this->gameLoop();
}

Game::~Game() {

}

void Game::gameLoop() {
	Graphics graphics;
	Input input;
	SDL_Event event;

	while (true) {
		input.beginNewFrame();

		if (SDL_PollEvent(&event)) {
			if (event.type == SDL_KEYDOWN) {

			}
			if (event.type == SDL_QUIT) {
				return;
			}
		}
	}
}

void Game::draw(Graphics& graphics) {
	
}

void Game::update(float elapsedTime) {

}