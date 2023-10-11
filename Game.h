#pragma once
#include"GameState.h"
#include"MainMenuState.h"
#include"State.h"

class Game
{
public:
	std::stack<State*>states;

	Game();
	~Game();

	void update();
};

