#include <iostream>
#include <array>

struct Card {
        enum Suits {
            Hearts = 0, Clubs, Spades, Diamonds
        } Suit;
        enum Numbers {
            Ace = 1,
            Two = 2,
            Three = 3,
            Four = 4,
            Five = 5,
            Six = 6,
            Seven = 7,
            Eight = 8,
            Nine = 9,
            Jack = 10,
            King = 10,
            Queen = 10,
        } Face;
    };

class Deck {

public:
    Deck();

private:
    const int SuitSize = 4;
    const int FaceSize = 13;
    std::array<Card,52> Cards;
};