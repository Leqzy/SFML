#include "Game.h"

Game::Game(int windowWidth, int windowHeight, std::string windowTitle)
   :window(sf::VideoMode(windowWidth, windowHeight), windowTitle),
    player1(Player::PLAYER1, windowHeight),
    player2(Player::PLAYER2, windowHeight)
{
    player1.setPosition(50.f, 250.f);
    player2.setPosition(750.f, 250.f);

    font.loadFromFile("Fonts/Blippo-Bold.ttf");
    if (!font.loadFromFile("Fonts/Blippo-Bold.ttf")) {
        std::cout << "Font laad niet";
    }

    bool ballMoving = false;
    score = new Score(windowWidth, font);

    isRunning = true;
}

Game::~Game() {

}

bool Game::GetIsRunning() {
	return isRunning;
}

void Game::Update() {

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Space) && !ballMoving) {
            ballMoving = true;
        }

        if (ballMoving) {
            player1.update(window);
            player2.update(window);
            ball.update(window, player1.getShape(), player2.getShape());


            float x = ball.getShape().getPosition().x;
            float windowWidth = static_cast<float>(window.getSize().x);

            if (x < 0) { //rechts scoort
                score->addPointToPlayer2();
                ball.reset(window);
            }
            else if (x > windowWidth) { //links scoort
                score->addPointToPlayer1();
                ball.reset(window);
            }

            if (score->hasWinner()) {
                ballMoving = false;
            }
        }

        window.clear();
        Draw();
        window.display();

    }

}

void Game::Draw() {

    window.draw(ball.getShape());
    window.draw(player1.getShape());
    window.draw(player2.getShape());
    score->draw(window);
}