#include "MainMenuState.h"

MainMenuState::MainMenuState()
{
	this->window = new sf::RenderWindow(sf::VideoMode(1000, 700), "Find");
}

MainMenuState::~MainMenuState()
{
	delete this->window;
}

void MainMenuState::update(std::stack<State*>states)
{
}

void MainMenuState::render()
{

}
