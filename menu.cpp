#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <iostream>
#include "Menu.h"

Menu::Menu(float width, float height) {

//not sure why has return type, here set up code to call menu etc, perhaps integrate background into the draw of this func

}


















{

    sf::Texture BackgroundTexture;
    sf::Sprite background;
    sf::Vector2u TextureSize;  //Added to store texture size.
    sf::Vector2u WindowSize;   //Added to store window size.

    if(!BackgroundTexture.loadFromFile("background.png"))
    {
        return -1;
    }
    else
    {
        TextureSize = BackgroundTexture.getSize(); //Get size of texture.
        WindowSize = window.getSize();             //Get size of window.

        float ScaleX = (float) WindowSize.x / TextureSize.x;
        float ScaleY = (float) WindowSize.y / TextureSize.y;     //Calculate scale.

        background.setTexture(BackgroundTexture);
        background.setScale(ScaleX, ScaleY);      //Set scale.










    }
}