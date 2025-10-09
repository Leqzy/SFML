#pragma once
#include <iostream>
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <SFML/System.hpp>
#include <string>

class Game
{
public:
	Game(int WindowWidth, int WindowHeight, std::string WindowTitle);   //constructor
	~Game();  //destructor

	void Update();

	bool GetIsRunning();
	sf::RenderWindow window;
	void Draw();



private:

	bool isRunning = false;

protected:

};

