#pragma once
#include"State.h"

class GameState:public State
{
public:
	sf::RenderWindow* window;

	GameState();
	~GameState();

	void update();
	void render();
};

