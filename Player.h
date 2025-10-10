#pragma once
#include <SFML/Graphics.hpp>

class Player {
public:
    Player();
    const sf::RectangleShape& getShape() const;

    void update(sf::Keyboard::Key UpKey, sf::Keyboard::Key DownKey);
    void setPosition(float x, float y);


private:
    sf::RectangleShape player;
};
