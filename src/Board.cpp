#include "Board.h"

Board::Board()
{
    cardTableImg.loadFromFile("./resources/card_table.png");
    table.setTexture(cardTableImg);

    table.setPosition(sf::Vector2f(0.f, 0.f));
    width = table.getLocalBounds().width;
    height = table.getLocalBounds().height;

}

void Board::draw(sf::RenderWindow &wnd)
{
    wnd.draw(table);
}
