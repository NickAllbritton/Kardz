#include "Board.h"

Board::Board()
{
    cardTableImg.loadFromFile("./resources/card_table.png");
    table.setTexture(cardTableImg);
    width = table.getLocalBounds().width;
    height = table.getLocalBounds().height;
}

void Board::draw(sf::RenderWindow &wnd)
{
    wnd.draw(table);
}
