#pragma once
#include"stdafh.h"

class tile
{
public:
	bool isCollision;
	int type;
	sf::Sprite sprite;
	sf::Texture texture;

	tile(float x, float y, bool collision, int type, sf::Texture texture)
	{
		this->texture = texture;
		this->sprite.setTexture(this->texture);

		this->sprite.setPosition(x, y);
		this->isCollision = collision;
		this->type = type;
	}

};

class MainMap
{
public:
	std::string map[20] = {
		"000000000000000000000000000000",
		"000000000000000000000000000000",
		"000000000000000000000000000000",
		"000000000000000000000000000000",
		"000000000000000000000000000000",
		"000000000000000000000000000000",
		"000000000000000000000000000000",
		"000000000000000000000000000000",
		"000000000000000000000000000000",
		"000000000000000000000000000000",
		"000000000000000000000000000000",
		"000000000000000000000000000000",
		"000000000000000000000000000000",
		"000000000000000000000000000000",
		"000000000000000000000000000000",
		"000000000000000000000000000000",
		"000000000000000000000000000000",
		"000000000000000000000000000000",
		"000000000000000000000000000000",
		"000000000000000000000000000000",
	};

	std::vector<tile*>tiles;
	sf::Texture textureSheet;

	MainMap();
	~MainMap();

	void render(sf::RenderWindow* window);
};

