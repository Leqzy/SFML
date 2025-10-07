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
	//structuur van de functie:
	//return type, functie naam ( argumenten );
	bool GetIsRunning();
	sf::RenderWindow window;


private:
	bool isRunning = false;
protected:

};

