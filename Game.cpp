#include "Game.h"

Game::Game(int windowHeight, int windowWidth, std::string windowTitle)
	:window(sf::VideoMode(windowHeight, windowWidth), windowTitle)
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

        player1.update(sf::Keyboard::W, sf::Keyboard::S);
        player2.update(sf::Keyboard::Up, sf::Keyboard::Down);

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