#include "Player.h"

Player::Player() {
    player.setSize(sf::Vector2f(20, 100));
    player.setFillColor(sf::Color::White);
}

void Player::update(sf::Keyboard::Key UpKey, sf::Keyboard::Key DownKey) {
    
    float speed = 0.1;

    if (sf::Keyboard::isKeyPressed(UpKey)) {
        player.move(0, -speed);
    }

    if (sf::Keyboard::isKeyPressed(DownKey)) {
        player.move(0, speed);
    }
}

void Player::setPosition(float x, float y) {
    player.setPosition(x,y);
}

const sf::RectangleShape& Player::getShape() const {

    return player;
}