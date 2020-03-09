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
            Ten = 10,
            Jack = 11,
            Queen = 12,
            King = 13,
        } Face;
    };

class Deck {

public:
    Deck();
    void ShuffleDeck();
    void CheckCard();
    void DisplayCard(std::array<Card, 2> array);

private:
    const int SuitSize = 4;
    const int FaceSize = 13;
    int CurrentCard = 0;
    std::array<std::array<Card, 2>, 52> Cards;
};

