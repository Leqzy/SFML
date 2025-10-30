#pragma once
#include <SFML/Graphics.hpp>
#include <string>

class Score {
public:
    Score(float windowWidth, const sf::Font& font);

    void addPointToPlayer1();
    void addPointToPlayer2();
    void reset();
    bool hasWinner() const;
    int getWinner() const;
    void draw(sf::RenderWindow& window);


private:
    int score1;
    int score2;
    sf::Text scoreText;
};


