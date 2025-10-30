#include "Ball.h"
#include <cstdlib>

Ball::Ball() {
    ball.setRadius(10);
    ball.setFillColor(sf::Color::White);
    ball.setOrigin(ball.getRadius(), ball.getRadius());
    ball.setPosition(400, 300);

    speed = sf::Vector2f(0.06f, 0.1f);


}

void Ball::update(const sf::RenderWindow& window, const sf::RectangleShape player1, const sf::RectangleShape player2) {
    ball.move(speed);

    wallCollision(window);
    playerCollision(player1, player2);
}

void Ball::wallCollision(const sf::RenderWindow& window) {
    float y = ball.getPosition().y;
    float radius = ball.getRadius();
    float windowHeight = static_cast<float>(window.getSize().y);

    if(y - radius < 0) {
        ball.setPosition(ball.getPosition().x, radius);
        speed.y = -speed.y;
    }
    if (y + radius > windowHeight) {
        ball.setPosition(ball.getPosition().x, windowHeight - radius);
        speed.y = -speed.y;
    }

}

void Ball::playerCollision(const sf::RectangleShape player1, const sf::RectangleShape player2) {
    if (ball.getGlobalBounds().intersects(player1.getGlobalBounds()) ||
        ball.getGlobalBounds().intersects(player2.getGlobalBounds())) {

        speed.x = -speed.x;
    }
}

void Ball::reset(const sf::RenderWindow& window) {
    // zet de bal in het midden
    ball.setPosition(
        static_cast<float>(window.getSize().x) / 2.f,
        static_cast<float>(window.getSize().y) / 2.f
    );

    // geef hem een willekeurige richting
    speed = sf::Vector2f(4.f, 3.f);

    if (rand() % 2 == 0)
        speed.x = -speed.x;
    if (rand() % 2 == 0)
        speed.y = -speed.y;
}

const sf::CircleShape& Ball::getShape() const{

    return ball;
}

