#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <iostream>
#include <math.h>
#include "menu.h"
#include "Game.h"

Game::Game(sf::RenderWindow &window) {

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


}


void GameStart(Deck deck) {

//Can now write
//START WITH THE DEALER GETTING TWO CARDS



}

void Game::draw(sf::RenderWindow &window) {
    window.draw(background);

    }