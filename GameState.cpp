#include "GameState.h"

GameState::GameState()
{
	this->window = new sf::RenderWindow(sf::VideoMode(960, 640), "Find piece");

	this->mainMap = new MainMap();
}

GameState::~GameState()
{
	delete this->mainMap;
}

void GameState::update(std::stack<State*>*states)
{

}

void GameState::render()
{
	window->clear();
	this->mainMap->render(this->window);
	window->display();
}
