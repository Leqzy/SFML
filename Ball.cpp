#include "Ball.h"

Ball::Ball() {
    ball.setRadius(10);
    ball.setFillColor(sf::Color::White);
    ball.setOrigin(ball.getRadius(), ball.getRadius());
    ball.setPosition(400, 300);
}

const sf::CircleShape& Ball::getShape() const{

    return ball;
}

