#pragma once
#include <SFML/Graphics.hpp>

class Player {
public:
    enum PlayerType {PLAYER1, PLAYER2};

    Player(PlayerType type, float windowHeight);

    void update(const sf::RenderWindow& window);
    void setPosition(float x, float y);
    const sf::RectangleShape& getShape() const;


private:
    sf::RectangleShape player;
    sf::Keyboard::Key upKey;
    sf::Keyboard::Key downKey;
    float speed = 0.2f;
    float windowHeight;

    void handleInput();
    void windowBorder(const sf::RenderWindow& window);
};
