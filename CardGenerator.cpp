#include "menu.h"
#include "CardGenerator.h"
#include <math.h>
#include <iostream>
#include <random>

Deck::Deck() {

    Cards = { {
                      //Hearts
                      {Card::Hearts,Card::Ace},
                      {Card::Hearts,Card::Two},
                      {Card::Hearts,Card::Three},
                      {Card::Hearts,Card::Four},
                      {Card::Hearts,Card::Five},
                      {Card::Hearts,Card::Six},
                      {Card::Hearts,Card::Seven},
                      {Card::Hearts,Card::Eight},
                      {Card::Hearts,Card::Nine},
                      {Card::Hearts,Card::Ten},
                      {Card::Hearts,Card::Jack},
                      {Card::Hearts,Card::King},
                      {Card::Hearts,Card::Queen},
                      //Clubs
                      {Card::Clubs,Card::Ace},
                      {Card::Clubs,Card::Two},
                      {Card::Clubs,Card::Three},
                      {Card::Clubs,Card::Four},
                      {Card::Clubs,Card::Five},
                      {Card::Clubs,Card::Six},
                      {Card::Clubs,Card::Seven},
                      {Card::Clubs,Card::Eight},
                      {Card::Clubs,Card::Nine},
                      {Card::Clubs,Card::Ten},
                      {Card::Clubs,Card::Jack},
                      {Card::Clubs,Card::Queen},
                      {Card::Clubs,Card::King},
                      //Spades
                      {Card::Spades,Card::Ace},
                      {Card::Spades,Card::Two},
                      {Card::Spades,Card::Three},
                      {Card::Spades,Card::Four},
                      {Card::Spades,Card::Five},
                      {Card::Spades,Card::Six},
                      {Card::Spades,Card::Seven},
                      {Card::Spades,Card::Eight},
                      {Card::Spades,Card::Nine},
                      {Card::Spades,Card::Ten},
                      {Card::Spades,Card::Jack},
                      {Card::Spades,Card::Queen},
                      {Card::Spades,Card::King},
                      //Diamonds
                      {Card::Diamonds,Card::Ace},
                      {Card::Diamonds,Card::Two},
                      {Card::Diamonds,Card::Three},
                      {Card::Diamonds,Card::Four},
                      {Card::Diamonds,Card::Five},
                      {Card::Diamonds,Card::Six},
                      {Card::Diamonds,Card::Seven},
                      {Card::Diamonds,Card::Eight},
                      {Card::Diamonds,Card::Nine},
                      {Card::Diamonds,Card::Ten},
                      {Card::Diamonds,Card::Jack},
                      {Card::Diamonds,Card::Queen},
                      {Card::Diamonds,Card::King},
    } };
    ShuffleDeck();
}

void Deck::ShuffleDeck() {
    std::random_device rd;
    std::mt19937 g(rd());

    std::shuffle(Cards.begin(),Cards.end(), g);

}

void Deck::CheckCard() {
    //switch
if(CurrentCard > 52) {
    ShuffleDeck();
}
    DisplayCard(Cards[CurrentCard]);
CurrentCard++;

}

void Deck::DisplayCard(std::array<Card, 2> CurrentCard) {

    std::cout << "Displaying Card Chosen....\n";
switch(Card::Diamonds) {
    case Card::Hearts:
        std::cout << "Heart\n";
        break;
    case Card::Clubs:
        std::cout << "Club\n";
        break;
    case Card::Spades:
        std::cout << "Spade\n";
        break;
    case Card::Diamonds:
        std::cout << "Diamond\n";
        break;
}
switch(Card::Ace) {
    case Card::Ace:
        std::cout << "Heart\n";
        break;
    case Card::Two:
        std::cout << "Club\n";
        break;
    case Card::Three:
        std::cout << "Spade\n";
        break;
    case Card::Four:
        std::cout << "Diamond\n";
        break;
    case Card::Five:
        std::cout << "Heart\n";
        break;
    case Card::Six:
        std::cout << "Club\n";
        break;
    case Card::Seven:
        std::cout << "Spade\n";
        break;
    case Card::Eight:
        std::cout << "Diamond\n";
        break;
    case Card::Nine:
        std::cout << "Heart\n";
        break;
    case Card::Ten:
        std::cout << "Club\n";
        break;
    case Card::Jack:
        std::cout << "Spade\n";
        break;
    case Card::Queen:
        std::cout << "Diamond\n";
        break;
    case Card::King:
        std::cout << "Diamond\n";
        break;
}

return;
}