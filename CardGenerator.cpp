#include "menu.h"
#include "CardGenerator.h"
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <math.h>
#include <iostream>
#include <random>

Deck::Deck() {

    if (!TwoClubs.loadFromFile("../assets/images/cards/2C.png")) {
        std::cout << "Texture Failed" << std::endl;
    }
    if (!TwoDiamonds.loadFromFile("../assets/images/cards/2D.png")) {
        std::cout << "Texture Failed" << std::endl;
    }
    if (!TwoHearts.loadFromFile("../assets/images/cards/2H.png")) {
        std::cout << "Texture Failed" << std::endl;
    }
    if (!TwoSpades.loadFromFile("../assets/images/cards/2S.png")) {
        std::cout << "Texture Failed" << std::endl;
    }
    if (!ThreeClubs.loadFromFile("../assets/images/cards/3C.png")) {
        std::cout << "Texture Failed" << std::endl;
    }
    if (!ThreeDiamonds.loadFromFile("../assets/images/cards/3D.png")) {
        std::cout << "Texture Failed" << std::endl;
    }
    if (!ThreeHearts.loadFromFile("../assets/images/cards/3H.png")) {
        std::cout << "Texture Failed" << std::endl;
    }
    if (!ThreeSpades.loadFromFile("../assets/images/cards/3S.png")) {
        std::cout << "Texture Failed" << std::endl;
    }
    if (!FourClubs.loadFromFile("../assets/images/cards/4C.png")) {
        std::cout << "Texture Failed" << std::endl;
    }
    if (!FourDiamonds.loadFromFile("../assets/images/cards/4D.png")) {
        std::cout << "Texture Failed" << std::endl;
    }
    if (!FourHearts.loadFromFile("../assets/images/cards/4H.png")) {
        std::cout << "Texture Failed" << std::endl;
    }
    if (!FourSpades.loadFromFile("../assets/images/cards/4S.png")) {
        std::cout << "Texture Failed" << std::endl;
    }
    if (!FiveClubs.loadFromFile("../assets/images/cards/5C.png")) {
        std::cout << "Texture Failed" << std::endl;
    }
    if (!FiveDiamonds.loadFromFile("../assets/images/cards/5D.png")) {
        std::cout << "Texture Failed" << std::endl;
    }
    if (!FiveHearts.loadFromFile("../assets/images/cards/5H.png")) {
        std::cout << "Texture Failed" << std::endl;
    }
    if (!FiveSpades.loadFromFile("../assets/images/cards/5S.png")) {
        std::cout << "Texture Failed" << std::endl;
    }
    if (!SixClubs.loadFromFile("../assets/images/cards/6C.png")) {
        std::cout << "Texture Failed" << std::endl;
    }
    if (!SixDiamonds.loadFromFile("../assets/images/cards/6D.png")) {
        std::cout << "Texture Failed" << std::endl;
    }
    if (!SixHearts.loadFromFile("../assets/images/cards/6H.png")) {
        std::cout << "Texture Failed" << std::endl;
    }
    if (!SixSpades.loadFromFile("../assets/images/cards/6S.png")) {
        std::cout << "Texture Failed" << std::endl;
    }
    if (!SevenClubs.loadFromFile("../assets/images/cards/7C.png")) {
        std::cout << "Texture Failed" << std::endl;
    }
    if (!SevenDiamonds.loadFromFile("../assets/images/cards/7D.png")) {
        std::cout << "Texture Failed" << std::endl;
    }
    if (!SevenHearts.loadFromFile("../assets/images/cards/7H.png")) {
        std::cout << "Texture Failed" << std::endl;
    }
    if (!SevenSpades.loadFromFile("../assets/images/cards/7S.png")) {
        std::cout << "Texture Failed" << std::endl;
    }
    if (!EightClubs.loadFromFile("../assets/images/cards/8C.png")) {
        std::cout << "Texture Failed" << std::endl;
    }
    if (!EightDiamonds.loadFromFile("../assets/images/cards/8D.png")) {
        std::cout << "Texture Failed" << std::endl;
    }
    if (!EightHearts.loadFromFile("../assets/images/cards/8H.png")) {
        std::cout << "Texture Failed" << std::endl;
    }
    if (!EightSpades.loadFromFile("../assets/images/cards/8S.png")) {
        std::cout << "Texture Failed" << std::endl;
    }
    if (!NineClubs.loadFromFile("../assets/images/cards/9C.png")) {
        std::cout << "Texture Failed" << std::endl;
    }
    if (!NineDiamonds.loadFromFile("../assets/images/cards/9D.png")) {
        std::cout << "Texture Failed" << std::endl;
    }
    if (!NineHearts.loadFromFile("../assets/images/cards/9H.png")) {
        std::cout << "Texture Failed" << std::endl;
    }
    if (!NineSpades.loadFromFile("../assets/images/cards/9S.png")) {
        std::cout << "Texture Failed" << std::endl;
    }
    if (!TenClubs.loadFromFile("../assets/images/cards/10C.png")) {
        std::cout << "Texture Failed" << std::endl;
    }
    if (!TenDiamonds.loadFromFile("../assets/images/cards/10D.png")) {
        std::cout << "Texture Failed" << std::endl;
    }
    if (!TenHearts.loadFromFile("../assets/images/cards/10H.png")) {
        std::cout << "Texture Failed" << std::endl;
    }
    if (!TenSpades.loadFromFile("../assets/images/cards/10S.png")) {
        std::cout << "Texture Failed" << std::endl;
    }
    if (!JackClubs.loadFromFile("../assets/images/cards/JC.png")) {
        std::cout << "Texture Failed" << std::endl;
    }
    if (!JackDiamonds.loadFromFile("../assets/images/cards/JD.png")) {
        std::cout << "Texture Failed" << std::endl;
    }
    if (!JackHearts.loadFromFile("../assets/images/cards/JH.png")) {
        std::cout << "Texture Failed" << std::endl;
    }
    if (!JackSpades.loadFromFile("../assets/images/cards/JS.png")) {
        std::cout << "Texture Failed" << std::endl;
    }
    if (!QueenClubs.loadFromFile("../assets/images/cards/QC.png")) {
        std::cout << "Texture Failed" << std::endl;
    }
    if (!QueenDiamonds.loadFromFile("../assets/images/cards/QD.png")) {
        std::cout << "Texture Failed" << std::endl;
    }
    if (!QueenHearts.loadFromFile("../assets/images/cards/QH.png")) {
        std::cout << "Texture Failed" << std::endl;
    }
    if (!QueenSpades.loadFromFile("../assets/images/cards/QS.png")) {
        std::cout << "Texture Failed" << std::endl;
    }
    if (!KingClubs.loadFromFile("../assets/images/cards/KC.png")) {
        std::cout << "Texture Failed" << std::endl;
    }
    if (!KingDiamonds.loadFromFile("../assets/images/cards/KD.png")) {
        std::cout << "Texture Failed" << std::endl;
    }
    if (!KingHearts.loadFromFile("../assets/images/cards/KH.png")) {
        std::cout << "Texture Failed" << std::endl;
    }
    if (!KingSpades.loadFromFile("../assets/images/cards/KS.png")) {
        std::cout << "Texture Failed" << std::endl;
    }
    if (!AceClubs.loadFromFile("../assets/images/cards/AC.png")) {
        std::cout << "Texture Failed" << std::endl;
    }
    if (!AceDiamonds.loadFromFile("../assets/images/cards/AD.png")) {
        std::cout << "Texture Failed" << std::endl;
    }
    if (!AceHearts.loadFromFile("../assets/images/cards/AH.png")) {
        std::cout << "Texture Failed" << std::endl;
    }
    if (!AceSpades.loadFromFile("../assets/images/cards/AS.png")) {
        std::cout << "Texture Failed" << std::endl;
    }
    if (!CardBack.loadFromFile("../assets/images/cards/red_back.png")) {
        std::cout << "Texture Failed" << std::endl;
    }


    CardDisplay[0].setScale(0.25,0.25);
    CardDisplay[1].setScale(0.25,0.25);
    CardDisplay[2].setScale(0.25,0.25); //To Be Changed When assets change / Make for variable window sizes
    CardDisplay[3].setScale(0.25,0.25);
    CardDisplay[4].setScale(0.25,0.25);
    CardDisplay[5].setScale(0.25,0.25);
    CardDisplay[6].setScale(0.25,0.25);
    CardDisplay[7].setScale(0.25,0.25);
    CardDisplay[8].setScale(0.25,0.25);
    CardDisplay[9].setScale(0.25,0.25);
    CardDisplay[10].setScale(0.25,0.25);

    //Card Cover
    CardDisplay[10].setPosition(sf::Vector2f(200, 100));
    CardDisplay[10].setTexture(CardBack);

    //Dealer Cards
    CardDisplay[0].setPosition(sf::Vector2f(100, 100));
    CardDisplay[1].setPosition(sf::Vector2f(200, 100));
    CardDisplay[2].setPosition(sf::Vector2f(300, 100));
    CardDisplay[3].setPosition(sf::Vector2f(400, 100));
    CardDisplay[4].setPosition(sf::Vector2f(500, 100));
    //Player Cards
    CardDisplay[5].setPosition(sf::Vector2f(100, 500));
    CardDisplay[6].setPosition(sf::Vector2f(200, 500));
    CardDisplay[7].setPosition(sf::Vector2f(300, 500));
    CardDisplay[8].setPosition(sf::Vector2f(400, 500));
    CardDisplay[9].setPosition(sf::Vector2f(500, 500));



    ShuffleDeck();
}

Deck::~Deck()
{
}

void Deck::ShuffleDeck() {
    std::random_device rd;
    std::mt19937 g(rd());

    std::shuffle(std::begin(CurrentCard),std::end(CurrentCard), g);

}

int Deck::CheckCard(sf::RenderWindow &window,int CardLocation,int HandVal) {
    //switch
if(CardIteration > 52) {
    ShuffleDeck();
    CardIteration = 0;
}

    std::cout << "Displaying Card Chosen....\n";
    int Val = DisplayCard(window, CardValue[CurrentCard[CardIteration]][0], CardValue[CurrentCard[CardIteration]][1],CardLocation, HandVal);
    CardIteration++;
return Val;
}

int Deck::DisplayCard(sf::RenderWindow &window, int SuitVal, int FaceVal, int i,int HandVal) {
    int Val = 0;
    switch (SuitVal) {
        case 0:
            std::cout << "Heart\n";
            switch (FaceVal) {
                case 1:
                    std::cout << "Ace\n";
                    CardDisplay[i].setTexture(AceHearts);
                    if(HandVal >= 11) {
                        Val = 1;
                    }
                    else{
                        Val = 11;
                    }
                    break;
                case 2:
                    std::cout << "Two\n";
                    CardDisplay[i].setTexture(TwoHearts);
                    Val = 2;
                    break;
                case 3:
                    std::cout << "Three\n";
                    CardDisplay[i].setTexture(ThreeHearts);
                    Val = 3;
                    break;
                case 4:
                    std::cout << "Four\n";
                    CardDisplay[i].setTexture(FourHearts);
                    Val = 4;
                    break;
                case 5:
                    std::cout << "Five\n";
                    CardDisplay[i].setTexture(FiveHearts);
                    Val = 5;
                    break;
                case 6:
                    std::cout << "Six\n";
                    CardDisplay[i].setTexture(SixHearts);
                    Val = 6;
                    break;
                case 7:
                    std::cout << "Seven\n";
                    CardDisplay[i].setTexture(SevenHearts);
                    Val = 7;
                    break;
                case 8:
                    std::cout << "Eight\n";
                    CardDisplay[i].setTexture(EightHearts);
                    Val = 8;
                    break;
                case 9:
                    std::cout << "Nine\n";
                    CardDisplay[i].setTexture(NineHearts);
                    Val = 9;
                    break;
                case 10:
                    std::cout << "Ten\n";
                    CardDisplay[i].setTexture(TenHearts);
                    Val = 10;
                    break;
                case 11:
                    std::cout << "Jack\n";
                    CardDisplay[i].setTexture(JackHearts);
                    Val = 10;
                    break;
                case 12:
                    std::cout << "Queen\n";
                    CardDisplay[i].setTexture(QueenHearts);
                    Val = 10;
                    break;
                case 13:
                    std::cout << "King\n";
                    CardDisplay[i].setTexture(KingHearts);
                    Val = 10;
                    break;
            }
            break;
        case 1:
            std::cout << "Club\n";
            switch (FaceVal) {
                case 1:
                    std::cout << "Ace\n";
                    CardDisplay[i].setTexture(AceClubs);
                    if(HandVal >= 11) {
                        Val = 1;
                    }
                    else{
                        Val = 11;
                    }
                    break;
                case 2:
                    std::cout << "Two\n";
                    CardDisplay[i].setTexture(TwoClubs);
                    Val = 2;
                    break;
                case 3:
                    std::cout << "Three\n";
                    CardDisplay[i].setTexture(ThreeClubs);
                    Val = 3;
                    break;
                case 4:
                    std::cout << "Four\n";
                    CardDisplay[i].setTexture(FourClubs);
                    Val = 4;
                    break;
                case 5:
                    std::cout << "Five\n";
                    CardDisplay[i].setTexture(FiveClubs);
                    Val = 5;
                    break;
                case 6:
                    std::cout << "Six\n";
                    CardDisplay[i].setTexture(SixClubs);
                    Val = 6;
                    break;
                case 7:
                    std::cout << "Seven\n";
                    CardDisplay[i].setTexture(SevenClubs);
                    Val = 7;
                    break;
                case 8:
                    std::cout << "Eight\n";
                    CardDisplay[i].setTexture(EightClubs);
                    Val = 8;
                    break;
                case 9:
                    std::cout << "Nine\n";
                    CardDisplay[i].setTexture(NineClubs);
                    Val = 9;
                    break;
                case 10:
                    std::cout << "Ten\n";
                    CardDisplay[i].setTexture(TenClubs);
                    Val = 10;
                    break;
                case 11:
                    std::cout << "Jack\n";
                    CardDisplay[i].setTexture(JackClubs);
                    Val = 10;
                    break;
                case 12:
                    std::cout << "Queen\n";
                    CardDisplay[i].setTexture(QueenClubs);
                    Val = 10;
                    break;
                case 13:
                    std::cout << "King\n";
                    CardDisplay[i].setTexture(KingClubs);
                    Val = 10;
                    break;
            }
            break;
        case 2:
            std::cout << "Spade\n";
            switch (FaceVal) {
                case 1:
                    std::cout << "Ace\n";
                    CardDisplay[i].setTexture(AceSpades);
                    if(HandVal >= 11) {
                        Val = 1;
                    }
                    else{
                        Val = 11;
                    }
                    break;
                case 2:
                    std::cout << "Two\n";
                    CardDisplay[i].setTexture(TwoSpades);
                    Val = 2;
                    break;
                case 3:
                    std::cout << "Three\n";
                    CardDisplay[i].setTexture(ThreeSpades);
                    Val = 3;
                    break;
                case 4:
                    std::cout << "Four\n";
                    CardDisplay[i].setTexture(FourSpades);
                    Val = 4;
                    break;
                case 5:
                    std::cout << "Five\n";
                    CardDisplay[i].setTexture(FiveSpades);
                    Val = 5;
                    break;
                case 6:
                    std::cout << "Six\n";
                    CardDisplay[i].setTexture(SixSpades);
                    Val = 6;
                    break;
                case 7:
                    std::cout << "Seven\n";
                    CardDisplay[i].setTexture(SevenSpades);
                    Val = 7;
                    break;
                case 8:
                    std::cout << "Eight\n";
                    CardDisplay[i].setTexture(EightSpades);
                    Val = 8;
                    break;
                case 9:
                    std::cout << "Nine\n";
                    CardDisplay[i].setTexture(NineSpades);
                    Val = 9;
                    break;
                case 10:
                    std::cout << "Ten\n";
                    CardDisplay[i].setTexture(TenSpades);
                    Val = 10;
                    break;
                case 11:
                    std::cout << "Jack\n";
                    CardDisplay[i].setTexture(JackSpades);
                    Val = 10;
                    break;
                case 12:
                    std::cout << "Queen\n";
                    CardDisplay[i].setTexture(QueenSpades);
                    Val = 10;
                    break;
                case 13:
                    std::cout << "King\n";
                    CardDisplay[i].setTexture(KingSpades);
                    Val = 10;
                    break;
            }
            break;
        case 3:
            std::cout << "Diamond\n";
            switch (FaceVal) {
                case 1:
                    std::cout << "Ace\n";
                    CardDisplay[i].setTexture(AceDiamonds);
                    if(HandVal >= 11) {
                        Val = 1;
                    }
                    else{
                        Val = 11;
                    }
                    break;
                case 2:
                    std::cout << "Two\n";
                    CardDisplay[i].setTexture(TwoDiamonds);
                    Val = 2;
                    break;
                case 3:
                    std::cout << "Three\n";
                    CardDisplay[i].setTexture(ThreeDiamonds);
                    Val = 3;
                    break;
                case 4:
                    std::cout << "Four\n";
                    CardDisplay[i].setTexture(FourDiamonds);
                    Val = 4;
                    break;
                case 5:
                    std::cout << "Five\n";
                    CardDisplay[i].setTexture(FiveDiamonds);
                    Val = 5;
                    break;
                case 6:
                    std::cout << "Six\n";
                    CardDisplay[i].setTexture(SixDiamonds);
                    Val = 6;
                    break;
                case 7:
                    std::cout << "Seven\n";
                    CardDisplay[i].setTexture(SevenDiamonds);
                    Val = 7;
                    break;
                case 8:
                    std::cout << "Eight\n";
                    CardDisplay[i].setTexture(EightDiamonds);
                    Val = 8;
                    break;
                case 9:
                    std::cout << "Nine\n";
                    CardDisplay[i].setTexture(NineDiamonds);
                    Val = 9;
                    break;
                case 10:
                    std::cout << "Ten\n";
                    CardDisplay[i].setTexture(TenDiamonds);
                    Val = 10;
                    break;
                case 11:
                    std::cout << "Jack\n";
                    CardDisplay[i].setTexture(JackDiamonds);
                    Val = 10;
                    break;
                case 12:
                    std::cout << "Queen\n";
                    CardDisplay[i].setTexture(QueenDiamonds);
                    Val = 10;
                    break;
                case 13:
                    std::cout << "King\n";
                    CardDisplay[i].setTexture(KingDiamonds);
                    Val = 10;
                    break;
            }
            break;
    }
    return Val;
}

