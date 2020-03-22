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

void Deck::CheckCard(sf::RenderWindow &window) {
    //switch
if(CardIteration > 52) {
    ShuffleDeck();
    CardIteration = 0;
}

    std::cout << "Displaying Card Chosen....\n";
    DisplayCard(window, CardValue[CurrentCard[CardIteration]][0], CardValue[CurrentCard[CardIteration]][1]);
    CardIteration++;
return;
}

void Deck::DisplayCard(sf::RenderWindow &window, int SuitVal, int FaceVal) {
    int i =1;
    int Val = 0;
    switch (SuitVal) {
        case 0:
            std::cout << "Heart\n";
            switch (FaceVal) {
                case 1:
                    std::cout << "Ace\n";
                    CardDisplay[i].setTexture(AceHearts);
                    break;
                case 2:
                    std::cout << "Two\n";
                    CardDisplay[i].setTexture(TwoHearts);
                    break;
                case 3:
                    std::cout << "Three\n";
                    CardDisplay[i].setTexture(ThreeHearts);
                    break;
                case 4:
                    std::cout << "Four\n";
                    CardDisplay[i].setTexture(FourHearts);
                    break;
                case 5:
                    std::cout << "Five\n";
                    CardDisplay[i].setTexture(FiveHearts);
                    break;
                case 6:
                    std::cout << "Six\n";
                    CardDisplay[i].setTexture(SixHearts);
                    break;
                case 7:
                    std::cout << "Seven\n";
                    CardDisplay[i].setTexture(SevenHearts);
                    break;
                case 8:
                    std::cout << "Eight\n";
                    CardDisplay[i].setTexture(EightHearts);
                    break;
                case 9:
                    std::cout << "Nine\n";
                    CardDisplay[i].setTexture(NineHearts);
                    break;
                case 10:
                    std::cout << "Ten\n";
                    CardDisplay[i].setTexture(TenHearts);
                    break;
                case 11:
                    std::cout << "Jack\n";
                    CardDisplay[i].setTexture(JackHearts);
                    break;
                case 12:
                    std::cout << "Queen\n";
                    CardDisplay[i].setTexture(QueenHearts);
                    break;
                case 13:
                    std::cout << "King\n";
                    CardDisplay[i].setTexture(KingHearts);
                    break;
            }
            break;
        case 1:
            std::cout << "Club\n";
            switch (FaceVal) {
                case 1:
                    std::cout << "Ace\n";
                    CardDisplay[i].setTexture(AceClubs);
                    break;
                case 2:
                    std::cout << "Two\n";
                    CardDisplay[i].setTexture(TwoClubs);
                    break;
                case 3:
                    std::cout << "Three\n";
                    CardDisplay[i].setTexture(ThreeClubs);
                    break;
                case 4:
                    std::cout << "Four\n";
                    CardDisplay[i].setTexture(FourClubs);
                    break;
                case 5:
                    std::cout << "Five\n";
                    CardDisplay[i].setTexture(FiveClubs);
                    break;
                case 6:
                    std::cout << "Six\n";
                    CardDisplay[i].setTexture(SixClubs);
                    break;
                case 7:
                    std::cout << "Seven\n";
                    CardDisplay[i].setTexture(SevenClubs);
                    break;
                case 8:
                    std::cout << "Eight\n";
                    CardDisplay[i].setTexture(EightClubs);
                    break;
                case 9:
                    std::cout << "Nine\n";
                    CardDisplay[i].setTexture(NineClubs);
                    break;
                case 10:
                    std::cout << "Ten\n";
                    CardDisplay[i].setTexture(TenClubs);
                    break;
                case 11:
                    std::cout << "Jack\n";
                    CardDisplay[i].setTexture(JackClubs);
                    break;
                case 12:
                    std::cout << "Queen\n";
                    CardDisplay[i].setTexture(QueenClubs);
                    break;
                case 13:
                    std::cout << "King\n";
                    CardDisplay[i].setTexture(KingClubs);
                    break;
            }
            break;
        case 2:
            std::cout << "Spade\n";
            switch (FaceVal) {
                case 1:
                    std::cout << "Ace\n";
                    CardDisplay[i].setTexture(AceSpades);
                    break;
                case 2:
                    std::cout << "Two\n";
                    CardDisplay[i].setTexture(TwoSpades);
                    break;
                case 3:
                    std::cout << "Three\n";
                    CardDisplay[i].setTexture(ThreeSpades);
                    break;
                case 4:
                    std::cout << "Four\n";
                    CardDisplay[i].setTexture(FourSpades);
                    break;
                case 5:
                    std::cout << "Five\n";
                    CardDisplay[i].setTexture(FiveSpades);
                    break;
                case 6:
                    std::cout << "Six\n";
                    CardDisplay[i].setTexture(SixSpades);
                    break;
                case 7:
                    std::cout << "Seven\n";
                    CardDisplay[i].setTexture(SevenSpades);
                    break;
                case 8:
                    std::cout << "Eight\n";
                    CardDisplay[i].setTexture(EightSpades);
                    break;
                case 9:
                    std::cout << "Nine\n";
                    CardDisplay[i].setTexture(NineSpades);
                    break;
                case 10:
                    std::cout << "Ten\n";
                    CardDisplay[i].setTexture(TenSpades);
                    break;
                case 11:
                    std::cout << "Jack\n";
                    CardDisplay[i].setTexture(JackSpades);
                    break;
                case 12:
                    std::cout << "Queen\n";
                    CardDisplay[i].setTexture(QueenSpades);
                    break;
                case 13:
                    std::cout << "King\n";
                    CardDisplay[i].setTexture(KingSpades);
                    break;
            }
            break;
        case 3:
            std::cout << "Diamond\n";
            switch (FaceVal) {
                case 1:
                    std::cout << "Ace\n";
                    CardDisplay[i].setTexture(AceDiamonds);
                    break;
                case 2:
                    std::cout << "Two\n";
                    CardDisplay[i].setTexture(TwoDiamonds);
                    break;
                case 3:
                    std::cout << "Three\n";
                    CardDisplay[i].setTexture(ThreeDiamonds);
                    break;
                case 4:
                    std::cout << "Four\n";
                    CardDisplay[i].setTexture(FourDiamonds);
                    break;
                case 5:
                    std::cout << "Five\n";
                    CardDisplay[i].setTexture(FiveDiamonds);
                    break;
                case 6:
                    std::cout << "Six\n";
                    CardDisplay[i].setTexture(SixDiamonds);
                    break;
                case 7:
                    std::cout << "Seven\n";
                    CardDisplay[i].setTexture(SevenDiamonds);
                    break;
                case 8:
                    std::cout << "Eight\n";
                    CardDisplay[i].setTexture(EightDiamonds);
                    break;
                case 9:
                    std::cout << "Nine\n";
                    CardDisplay[i].setTexture(NineDiamonds);
                    break;
                case 10:
                    std::cout << "Ten\n";
                    CardDisplay[i].setTexture(TenDiamonds);
                    break;
                case 11:
                    std::cout << "Jack\n";
                    CardDisplay[i].setTexture(JackDiamonds);
                    break;
                case 12:
                    std::cout << "Queen\n";
                    CardDisplay[i].setTexture(QueenDiamonds);
                    break;
                case 13:
                    std::cout << "King\n";
                    CardDisplay[i].setTexture(KingDiamonds);
                    break;
            }
            break;
    }
    return;
}

