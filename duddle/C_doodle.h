#pragma once
#include <SFML/Graphics.hpp>

using std::string;
using sf::Keyboard;
class C_doodle
{
private:
	sf::Sprite sprite_doodle;
	sf::Texture doodle;

	int x = 0, y = 0;
public:



	void moveLeft() {
		this->x--;
		this->y++;
	}
	void moveRight() {
		this->x++;
		this->y++;
	}
	void jump() {
		this->y;
	}

	C_doodle(int x, int y) {
		this->doodle.loadFromFile("doodle.png", sf::IntRect(0, 0, 200, 200));
		this->sprite_doodle.setTexture(this->doodle);
		this->sprite_doodle.setPosition(225, 700);
		
		
	}
	sf::Sprite getSprite_doodle() {
		return this->sprite_doodle;
	}
	~C_doodle() {}
};
