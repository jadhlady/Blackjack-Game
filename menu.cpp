#include "menu.h"
#include <iostream>
#include "CardGenerator.h"


Menu::Menu(float width, float height, sf::RenderWindow &window) {

    if (!BackgroundTexture.loadFromFile("../assets/images/mainmenubackground.jpg")) {
        std::cout << "Background Texture Failed" << std::endl;
    } else {
        TextureSize = BackgroundTexture.getSize(); //Get size of texture.
        WindowSize = window.getSize();             //Get size of window.

        float ScaleX = (float) WindowSize.x / TextureSize.x;
        float ScaleY = (float) WindowSize.y / TextureSize.y;     //Calculate scale.

        background.setTexture(BackgroundTexture);
        background.setScale(ScaleX, ScaleY);      //Set scale.

        if (!font.loadFromFile("../assets/fonts/Lato.ttf")) {
            std::cout << "Can't Load Font, It's Over" << std::endl;
        }

        MainTitle.setFont(font);
        MainTitle.setFillColor(sf::Color::Black);
        MainTitle.setOutlineColor(sf::Color::Red);
        MainTitle.setOutlineThickness(3);
        MainTitle.setString("BlackJack");
        MainTitle.setCharacterSize(60);
        MainTitle.setPosition(sf::Vector2f(width / 2.5, height / 10));



        MainMenu[0].setFont(font);
        MainMenu[0].setColor(sf::Color::Red);
        MainMenu[0].setString("Play");
        MainMenu[0].setPosition(sf::Vector2f(width / 1.15, height/1.9));


        MainMenu[1].setFont(font);
        MainMenu[1].setColor(sf::Color::White);
        MainMenu[1].setString("Options");
        MainMenu[1].setPosition(sf::Vector2f(width / 1.15, (height/(1.9)+150)));

        MainMenu[2].setFont(font);
        MainMenu[2].setColor(sf::Color::White);
        MainMenu[2].setString("Exit");
        MainMenu[2].setPosition(sf::Vector2f(width / 1.15, (height/(1.9)+300)));

        MenuOptionSelect = 0;
    }
}

Menu::~Menu()
{
}

void Menu::draw(sf::RenderWindow &window)
{
    window.draw(background);
    window.draw(MainTitle);
    for (int i = 0; i < MAX_MAIN_MENU_ITEMS; i++) {
            window.draw(MainMenu[i]);
        }

}


void Menu::MoveUp()
{
    if (MenuOptionSelect - 1 >= 0)
    {
        MainMenu[MenuOptionSelect].setColor(sf::Color::White);
        MenuOptionSelect--;
        MainMenu[MenuOptionSelect].setColor(sf::Color::Red);
    }
}

void Menu::MoveDown()
{
    if (MenuOptionSelect + 1 < MAX_MAIN_MENU_ITEMS)
    {
        MainMenu[MenuOptionSelect].setColor(sf::Color::White);
        MenuOptionSelect++;
        MainMenu[MenuOptionSelect].setColor(sf::Color::Red);
    }
}
