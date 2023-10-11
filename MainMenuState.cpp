#include "MainMenuState.h"

MainMenuState::MainMenuState()
{
	this->window = new sf::RenderWindow(sf::VideoMode(1920,1080), "Find");

	this->texture.loadFromFile("res/HUD/bg2.png");
	this->background.setTexture(texture);

	this->font.loadFromFile("res/HUD/Font/NormalFont.ttf");

	this->playText.setFont(this->font);
	this->playText.setCharacterSize(50);
	this->playText.setString("Start");
	this->playText.setFillColor(sf::Color::White);
	this->playText.setPosition(250, 400);

	this->titleText.setFont(this->font);
	this->titleText.setCharacterSize(60);
	this->titleText.setString("Find Piece");
	this->titleText.setFillColor(sf::Color::White);
	this->titleText.setPosition(700, 150);

	this->quitText.setFont(this->font);
	this->quitText.setCharacterSize(50);
	this->quitText.setString("Quit");
	this->quitText.setFillColor(sf::Color::White);
	this->quitText.setPosition(250, 600);

	shape.setFillColor(sf::Color(10, 10, 10, 220));
	shape.setSize(sf::Vector2f(400,1080));
	shape.setPosition(150, 0);
	
	
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
	window->clear();
	window->draw(this->background);
	window->draw(this->shape);
	window->draw(this->playText);
	window->draw(this->quitText);
	window->draw(this->titleText);
	window->display();
}
