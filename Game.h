#pragma once
#include <iostream>
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <SFML/System.hpp>
class Game
{
public:
	Game();   //constructor
	~Game();  //destructor

	void Update();
	//structuur van de functie:
	//return type, functie naam ( argumenten );
	bool GetIsRunning();

private:
	bool isRunning = false;
protected:

};

