#pragma once
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>

#define MAX_MAIN_MENU_ITEMS 3

class Menu {

public:
    Menu(float width, float height, sf::RenderWindow &window);

    ~Menu();

    void draw(sf::RenderWindow &window);

    void MoveUp();

    void MoveDown();

    int GetSelectedItem() { return MenuOptionSelect; }


private:
    int MenuOptionSelect;
    sf::Font font;
    sf::Text MainMenu[MAX_MAIN_MENU_ITEMS];
    sf::Sprite background;
    sf::Texture BackgroundTexture;
    sf::Vector2u TextureSize;  //Added to store texture size.
    sf::Vector2u WindowSize;   //Added to store window size.

};