#include "Score.h"

Score::Score(float windowWidth, const sf::Font& font) {
    score1 = 0;
    score2 = 0;

    scoreText.setFont(font);
    scoreText.setCharacterSize(50);
    scoreText.setFillColor(sf::Color::Red);
    scoreText.setPosition(windowWidth / 2.f - 30.f, 10.f);
}

void Score::addPointToPlayer1() { score1++; }
void Score::addPointToPlayer2() { score2++; }

void Score::reset() {
    score1 = 0;
    score2 = 0;
}

bool Score::hasWinner() const {
    return (score1 >= 3 || score2 >= 3);
}

int Score::getWinner() const {
    if (score1 >= 3) return 1;
    if (score2 >= 3) return 2;
    return 0;
}

void Score::draw(sf::RenderWindow& window) {
    if (hasWinner()) {
        scoreText.setString("Speler " + std::to_string(getWinner()) + " wint!");
    }
    else {
        scoreText.setString(std::to_string(score1) + " - " + std::to_string(score2));
    }
    window.draw(scoreText);
}

