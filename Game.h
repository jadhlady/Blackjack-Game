
#include "CardGenerator.h"

class Game{

public:
   Game(sf::RenderWindow &window);
   void draw(sf::RenderWindow &window);
   void GameStart(Deck deck);


private:
    int DealerCards = 0; //Going to do case statements to determine where to draw cards/clear them
    int Player1Cards = 0;
    sf::Sprite background;
    sf::Texture BackgroundTexture;
    sf::Vector2u TextureSize;  //Added to store texture size.
    sf::Vector2u WindowSize;   //Added to store window size.
};
