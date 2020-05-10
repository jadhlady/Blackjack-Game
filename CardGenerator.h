#include <iostream>
#include <array>
#define Location 10
// 0-4 - Dealer's Hand
// 5-10 - Player's Hand

class Deck {

public:
    Deck();
    ~Deck();
    void ShuffleDeck();
    void CheckCard(sf::RenderWindow &window, int CardLocation);
    void DisplayCard(sf::RenderWindow &window, int SuitVal, int FaceVal,int CardLocation);
    int DrawCard = 0;
    sf::Sprite CardDisplay[Location];

private:
    // Image Drawing Variables
    sf::Texture TwoClubs,TwoDiamonds,TwoHearts,TwoSpades,ThreeClubs,ThreeDiamonds,ThreeHearts,ThreeSpades,FourClubs,FourDiamonds,FourHearts,FourSpades,FiveClubs,FiveDiamonds,FiveHearts,FiveSpades,
                SixClubs,SixDiamonds,SixHearts,SixSpades,SevenClubs,SevenDiamonds,SevenHearts,SevenSpades,EightClubs,EightDiamonds,EightHearts,EightSpades,NineClubs,NineDiamonds,NineHearts,NineSpades,
                TenClubs,TenDiamonds,TenHearts,TenSpades,JackClubs,JackDiamonds,JackHearts,JackSpades,QueenClubs,QueenDiamonds,QueenHearts,QueenSpades,KingClubs,KingDiamonds,KingHearts,KingSpades,
                AceClubs,AceDiamonds,AceHearts,AceSpades;
    //            Ace = 1,
    //            Two = 2,
    //            Three = 3,
    //            Four = 4,
    //            Five = 5,
    //            Six = 6,
    //            Seven = 7,
    //            Eight = 8,
    //            Nine = 9,
    //            Ten = 10,
    //            Jack = 11,
    //            Queen = 12,
    //            King = 13,

    //            Hearts = 0;
    //            Clubs  = 1;
    //            Spades = 2;
    //            Diamonds = 3;
    const int SuitSize = 4;
    const int FaceSize = 13;
    int CurrentCard[52] = {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51}; //can be changed depending on number of decks
    int CardIteration = 0;
    int CardValue[52][2] = {
            //Hearts
            {0, 1},
            {0, 2},
            {0, 3},
            {0, 4},
            {0, 5},
            {0, 6},
            {0, 7},
            {0, 8},
            {0, 9},
            {0, 10},
            {0, 11},
            {0, 12},
            {0, 13},
            //Clubs
            {1, 1},
            {1, 2},
            {1, 3},
            {1, 4},
            {1, 5},
            {1, 6},
            {1, 7},
            {1, 8},
            {1, 9},
            {1, 10},
            {1, 11},
            {1, 12},
            {1, 13},
            //Spades
            {2, 1},
            {2, 2},
            {2, 3},
            {2, 4},
            {2, 5},
            {2, 6},
            {2, 7},
            {2, 8},
            {2, 9},
            {2, 10},
            {2, 11},
            {2, 12},
            {2, 13},
            //Diamonds
            {3, 1},
            {3, 2},
            {3, 3},
            {3, 4},
            {3, 5},
            {3, 6},
            {3, 7},
            {3, 8},
            {3, 9},
            {3, 10},
            {3, 11},
            {3, 12},
            {3, 13},
    };
};

