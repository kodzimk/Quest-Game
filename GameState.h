#pragma once
#include"MainMap.h"
#include"State.h"

class GameState:public State
{
public:
	sf::RenderWindow* window;
	MainMap* mainMap;

	GameState();
	~GameState();

	void update(std::stack<State*>*states);
	void render();
};

