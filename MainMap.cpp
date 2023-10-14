#include "MainMap.h"

MainMap::MainMap()
{
	this->textureSheet.loadFromFile("res/Backgrounds/Tilesets/TilesetField.png");

	for (size_t i = 0; i < 20; i++)
	{
		for (size_t j = 0; j < 31; j++)
		{
			if (map[i][j]=='0') {
				this->tiles.push_back(new tile(j * 32, i * 32, false,0,this->textureSheet));
				this->tiles[this->tiles.size()-1]->sprite.setTextureRect(sf::IntRect(50, 0, 30, 30));
				this->tiles[this->tiles.size() - 1]->sprite.setScale(1.06, 1.06);
		    }
		}
	}
}

MainMap::~MainMap()
{
	for (size_t i = 0; i < this->tiles.size(); i++)
	{
		delete this->tiles[i];
	}
}

void MainMap::render(sf::RenderWindow* window)
{
	for (size_t i = 0; i < this->tiles.size(); i++)
	{
		if(this->tiles[i])
		window->draw(this->tiles[i]->sprite);
	}
}
