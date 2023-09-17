#include "Game.h"

Game::Game()
    : wnd(sf::RenderWindow(sf::VideoMode(board.getWidth(), board.getHeight()), "Kardz")),
        width(board.getWidth()), height(board.getHeight())
{}

void Game::run()
{
    // handle events
    events();

    wnd.clear();
    draw();

    update();
}

void Game::events()
{
    // loop through each window event created and then handle it 
    for (auto event = sf::Event{}; wnd.pollEvent(event);)
    {
        switch(event.type)
        {
            case sf::Event::Closed:
                wnd.close(); // press the x to close the window
            case sf::Event::KeyPressed:
                if(event.key.code == sf::Keyboard::Q) wnd.close(); // press q to close the window
            break;
        }
    }
}

void Game::update()
{
}

void Game::draw()
{
    board.draw(wnd);
    wnd.display();
}

void Game::startGame(std::string name)
{
    // start a game
}
