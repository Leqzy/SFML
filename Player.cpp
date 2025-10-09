#include "Player.h"

Player::Player() {
    player.setSize(sf::Vector2f(20, 100));
    player.setFillColor(sf::Color::White);
    player.setPosition(50, 250);
}

void Player::draw(sf::RenderWindow& window) {
    window.draw(player);
}