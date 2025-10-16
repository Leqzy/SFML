#include "Player.h"
#include <format>
#include <iostream>

Player::Player(PlayerType type, float windowHeight) {

    player.setSize(sf::Vector2f(20, 100));
    player.setFillColor(sf::Color::White);

    if (type == PLAYER1) {
        upKey = sf::Keyboard::W;
        downKey = sf::Keyboard::S;
    }

    if (type == PLAYER2) {
        upKey = sf::Keyboard::Up;
        downKey = sf::Keyboard::Down;
    }
}

void Player::update(const sf::RenderWindow& window) {
    handleInput();
    windowBorder(window);
}

void Player::handleInput() {

    if (sf::Keyboard::isKeyPressed(upKey)) {
        player.move(0, -speed);
    }
    if (sf::Keyboard::isKeyPressed(downKey)) {
        player.move(0, speed);
    }
}

void Player::windowBorder(const sf::RenderWindow& window) {
    float windowHeight = static_cast<float>(window.getSize().y);

    float y = player.getPosition().y;
    float height = player.getSize().y;

    if (y < 0)
        player.setPosition(player.getPosition().x, 0);

    if (y + height > windowHeight)
        player.setPosition(player.getPosition().x, windowHeight - height);
}

void Player::setPosition(float x, float y) {
    player.setPosition(x,y);
}

const sf::RectangleShape& Player::getShape() const {
    return player;
}