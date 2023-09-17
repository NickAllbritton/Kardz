#include <SFML/Graphics.hpp>
#include <utility>
#include "Board.h"

#ifndef GAME_H
#define GAME_H

class Game
{
public:
	Game();
	~Game() = default;
    const sf::RenderWindow& getWindow() const
    {
        return wnd;
    }
	void run();
private:
	void events(); // event loop
	void update(); // game logic
	void draw(); // drawing
	void startGame(std::string name); // -_-
private:
	Board board;
    sf::RenderWindow wnd;
	float width;
	float height;
	//Menu menu;
};

#endif