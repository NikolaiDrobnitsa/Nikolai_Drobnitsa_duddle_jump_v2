#pragma once
#include <SFML/Graphics.hpp>

using sf::Keyboard;
class C_platform
{
private:
	sf::Texture platform;
	sf::Sprite sprite_platform;

	int x = 0, y = 0;

public:
	C_platform(int x, int y) {
		this->platform.loadFromFile("platform.png", sf::IntRect(0, 0, 200, 200));
		this->sprite_platform.setTexture(this->platform);
		//this->sprite_platform.setPosition(230, 795);

	}
	sf::Sprite getSprite_platform() {
		return this->sprite_platform;
	}
	void spawn_platform(int x, int y) {
		for (int i = 0; i < 10; i++)
		{
			this->x = rand() % 400;
			this->y = rand() % 533;
		}
		for (int i = 0; i < 10; i++)
		{
			this->sprite_platform.setPosition(this->x, this->y);
			this->getSprite_platform();
		}

	}
	~C_platform() {}
};
