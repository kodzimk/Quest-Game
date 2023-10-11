#pragma once
#include"State.h"

class MainMenuState:public State
{
public:
	sf::RenderWindow* window;

	MainMenuState();
	~MainMenuState();

	void update(std::stack<State*>states);
	void render();
};

