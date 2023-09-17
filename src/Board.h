#include <SFML/Graphics.hpp>

#ifndef BOARD_H
#define BOARD_H

class Board
{
public:
	Board();
	~Board() = default;
	int getWidth() const
	{
		return width;
	}
	int getHeight() const
	{
		return height;
	}
	void draw(sf::RenderWindow& wnd);
private:
	// private methods

private:
	int width;
	int height;
    sf::Sprite table;
    sf::Texture cardTableImg;
};

#endif