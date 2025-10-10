#pragma once
#include <SFML/Graphics.hpp>

class Ball {
public:
    Ball();
    const sf::CircleShape& getShape() const;

private:
    sf::CircleShape ball;
};
