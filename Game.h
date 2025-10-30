#pragma once
#include <iostream>
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <SFML/System.hpp>
#include <string>
#include "Ball.h"
#include "Player.h"
#include "Score.h"

class Game
{

public:
	Game(int WindowWidth, int WindowHeight, std::string WindowTitle);   //constructor
	~Game();  //destructor

	void Update();

	bool GetIsRunning();
	sf::RenderWindow window;
	void Draw();

	void resetRound();

private:
	Ball ball;
	Player player1;
	Player player2;
	Score* score;
	sf::Font font;
	bool ballMoving = false;

	bool isRunning = false;

protected:

};

