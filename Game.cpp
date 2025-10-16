#include "Game.h"

Game::Game(int windowWidth, int windowHeight, std::string windowTitle)
   :window(sf::VideoMode(windowWidth, windowHeight), windowTitle),
    player1(Player::PLAYER1, windowHeight),
    player2(Player::PLAYER2, windowHeight)
{
    player1.setPosition(50.f, 250.f);
    player2.setPosition(750.f, 250.f);

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

        player1.update(window);
        player2.update(window);

        window.clear();

        Draw();


        window.display();

    }
}

void Game::Draw() {

    window.draw(ball.getShape());
    window.draw(player1.getShape());
    window.draw(player2.getShape());
}