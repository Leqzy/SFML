#pragma once
#include <SFML/Graphics.hpp>

class Player {
public:
    Player();
    void draw(sf::RenderWindow& window);

private:
    sf::RectangleShape player;
};
