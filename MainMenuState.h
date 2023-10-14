#pragma once
#include"State.h"
#include"GameState.h"

class GameState;

class MainMenuState:public State
{
public:
	sf::RenderWindow* window;
	sf::Texture texture;
	sf::Sprite background;
	sf::Text playText;
	sf::Text quitText;
	sf::Text titleText;
	sf::RectangleShape shape;
	sf::Vector2f mousePOsView;
	sf::Font font;

	MainMenuState();
	~MainMenuState();


	void changeStates(std::stack<State*>*states);
	void update(std::stack<State*>*states);
	void render();
};

