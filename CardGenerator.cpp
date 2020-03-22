#include "menu.h"
#include "CardGenerator.h"
#include <math.h>
#include <iostream>
#include <random>

Deck::Deck() {
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

void Deck::CheckCard() {
    //switch
if(CardIteration > 52) {
    ShuffleDeck();
    CardIteration = 0;
}

    std::cout << "Displaying Card Chosen....\n";
    DisplayCardSuit(CardValue[CurrentCard[CardIteration]][0]);
    DisplayCardFace(CardValue[CurrentCard[CardIteration]][1]);
CardIteration++;
    std::cout << CardIteration;
return;
}

void Deck::DisplayCardSuit(int SuitVal) {
    switch(SuitVal) {
        case 0:
            std::cout << "Heart\n";
            break;
        case 1:
            std::cout << "Club\n";
            break;
        case 2:
            std::cout << "Spade\n";
            break;
        case 3:
            std::cout << "Diamond\n";
            break;
    }
    return;
}


void Deck::DisplayCardFace(int FaceVal) {
    switch(FaceVal) {
        case 1:
            std::cout << "Ace\n";
            break;
        case 2:
            std::cout << "Two\n";
            break;
        case 3:
            std::cout << "Three\n";
            break;
        case 4:
            std::cout << "Four\n";
            break;
        case 5:
            std::cout << "Five\n";
            break;
        case 6:
            std::cout << "Six\n";
            break;
        case 7:
            std::cout << "Seven\n";
            break;
        case 8:
            std::cout << "Eight\n";
            break;
        case 9:
            std::cout << "Nine\n";
            break;
        case 10:
            std::cout << "Ten\n";
            break;
        case 11:
            std::cout << "Jack\n";
            break;
        case 12:
            std::cout << "Queen\n";
            break;
        case 13:
            std::cout << "King\n";
            break;
    }
    return;
}

