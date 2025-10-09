#pragma once
#include <SFML/Graphics.hpp>

class Ball {
public:
    Ball();
    const sf::CircleShape&s getShape() const;

private:
    sf::CircleShape ball;
};
