#pragma once
#include <SFML/Graphics.hpp>

class Ball {
public:
    Ball();
    void update(const sf::RenderWindow& window, const sf::RectangleShape player1, const sf::RectangleShape player2);
    const sf::CircleShape& getShape() const;

private:
    sf::CircleShape ball;
    sf::Vector2f speed;

    void wallCollision(const sf::RenderWindow& window);
    void playerCollision(const sf::RectangleShape player1, const sf::RectangleShape player2);
};
