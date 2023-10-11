#pragma once
#include"State.h"

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
	sf::Font font;

	MainMenuState();
	~MainMenuState();

	void update(std::stack<State*>states);
	void render();
};

