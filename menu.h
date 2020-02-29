#pragma once
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>

#define MAX_MAIN_MENU_ITEMS 3

class Menu {

public:
   Menu(float width, float height);
   ~Menu();

   void draw(sf::RenderWindow &window);
   void MoveUp();
   void MoveDown();


private:
    int MenuSelected;
    sf::Font font;
    sf::Text text[MAX_MAIN_MENU_ITEMS];



}