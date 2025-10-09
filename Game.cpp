#include "Game.h"

Game::Game(int windowHeight, int windowWidth, std::string windowTitle)
	:window(sf::VideoMode(windowHeight, windowWidth), windowTitle)
{
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

        window.clear();

        

        window.display();

    }
}

void Game::Draw() {

    
}