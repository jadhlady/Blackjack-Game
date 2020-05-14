#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <iostream>
#include <math.h>
#include "menu.h"
#include "Game.h"

Game::Game(float width, float height, sf::RenderWindow &window) {

    if (!BackgroundTexture.loadFromFile("../assets/images/gamebackground.jpg")) {
        std::cout << "Background Texture Failed" << std::endl;
    }
    else {
        TextureSize = BackgroundTexture.getSize(); //Get size of texture.
        WindowSize = window.getSize();             //Get size of window.

        float ScaleX = (float) WindowSize.x / TextureSize.x;
        float ScaleY = (float) WindowSize.y / TextureSize.y;     //Calculate scale.

        background.setTexture(BackgroundTexture);
        background.setScale(ScaleX, ScaleY);      //Set scale.

    }
    if (!WinLoseDraw.loadFromFile("../assets/fonts/Lato.ttf")) {
        std::cout << "Can't Load Font" << std::endl;
    }

    Win.setFont(WinLoseDraw);
    Win.setFillColor(sf::Color::Black);
    Win.setOutlineColor(sf::Color::Yellow);
    Win.setOutlineThickness(3);
    Win.setString("You Won!");
    Win.setCharacterSize(100);
    Win.setPosition(sf::Vector2f(width / 2, height / 2));

    Lose.setFont(WinLoseDraw);
    Lose.setFillColor(sf::Color::Black);
    Lose.setOutlineColor(sf::Color::Red);
    Lose.setOutlineThickness(3);
    Lose.setString("You Lose...");
    Lose.setCharacterSize(100);
    Lose.setPosition(sf::Vector2f(width / 2, height / 2));

    Draw.setFont(WinLoseDraw);
    Draw.setFillColor(sf::Color::Black);
    Draw.setOutlineColor(sf::Color::Black);
    Draw.setOutlineThickness(3);
    Draw.setString("Draw");
    Draw.setCharacterSize(100);
    Draw.setPosition(sf::Vector2f(width / 2, height / 2));



}


void Game::draw(sf::RenderWindow &window, int WinLoseDraw) {
    window.draw(background);
    if(WinLoseDraw == 0) {
        window.draw(Win);
    }
    else if(WinLoseDraw == 1) {
        window.draw(Lose);
    }
    else if(WinLoseDraw == 2) {
        window.draw(Draw);
    }

    }