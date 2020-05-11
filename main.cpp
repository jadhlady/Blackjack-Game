#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <iostream>
#include <math.h>
#include "menu.h"
#include "Game.h"
#define SFML_NO_DEPRECATED_WARNINGS

int main() {
    enum State {sMenu, Options, Game,RoundWait};
    enum State2 {Decide,DoNothing};
    State saved = sMenu;
    State2 Decision = DoNothing;
    int DealerCards = 0, DealerHandVal = 0, CardVal = 0;
    int PlayerCards = 0, PlayerHandVal = 0;
    int hitstay = 0, CheckforWin = 0;
// initalizing window display
    sf::ContextSettings settings;
    settings.antialiasingLevel = 8;
    sf::RenderWindow window;
// Display the list of all the video modes available for fullscreen
    std::vector<sf::VideoMode> modes = sf::VideoMode::getFullscreenModes();
    for (std::size_t i = 0; i < modes.size(); ++i) {
        sf::VideoMode mode = modes[i];
        std::cout << "Mode #" << i << ": "
                  << mode.width << "x" << mode.height << " - "
                  << mode.bitsPerPixel << " bpp" << std::endl;
    }

// Create a window with the same pixel depth, width and height as the desktop
    sf::VideoMode desktop = sf::VideoMode::getDesktopMode();
    window.create(sf::VideoMode(desktop.width, desktop.height, desktop.bitsPerPixel), "BlackJack", sf::Style::Fullscreen);
    window.setVerticalSyncEnabled(true); // call it once, after creating the window

//Create Main Menu Class
    Menu MainMenu(window.getSize().x, window.getSize().y,window);
//Create MainDeck Class
    Deck MainDeck;
//Create Play Class
    class Game Play(window);

//General Input Flow
    while(window.isOpen()) {
        sf::Event event;

// while there are pending events...
        while (window.pollEvent(event)) {

            switch (saved) {
                case sMenu:
                    // check the type of the event...
                    switch (event.type) {
                        // window closed
                        case sf::Event::Closed:
                            std::cout << "Window has been closed, program ended" << std::endl;
                            window.close();
                            break;
                        case sf::Event::KeyPressed:
                            switch (event.key.code) {
                                case sf::Keyboard::Up:
                                    MainMenu.MoveUp();
                                    break;

                                case sf::Keyboard::Down:
                                    MainMenu.MoveDown();
                                    break;

                                case sf::Keyboard::Return:
                                    switch (MainMenu.GetSelectedItem()) {
                                        case 0:
                                            std::cout << "Play button has been pressed" << std::endl;
                                            saved = Game;
                                            //Add Code to Change to Play State
                                            break;
                                        case 1:
                                            std::cout << "Option button has been pressed" << std::endl;
                                            //saved = Options;
                                            //Add Code to Change to Option State
                                            break;
                                        case 2:
                                            window.close();
                                            break;
                                    }
                                    break;
                            }
                            break;
                    }
                    break;
                case Options:;
                case Game:
                    switch (Decision) {
                        case DoNothing:
                            break;
                        case Decide:
                            switch (event.type) {
                                case sf::Event::KeyPressed:
                                    switch (event.key.code) {
                                        case sf::Keyboard::H:
                                            hitstay = 2;
                                            break;
                                        case sf::Keyboard::Space:
                                            hitstay = 1;
                                            //MAKE IT NOT HIT
                                            break;
                                    }
                                    break;
                            }
                            break;
                    }
                    break;
                case RoundWait:
                    switch (event.type) {
                        case sf::Event::KeyPressed:
                            switch (event.key.code) {
                                case sf::Keyboard::Q:
                                    saved = sMenu;
                                    break;
                                case sf::Keyboard::Enter:
                                    DealerCards = 0;
                                    PlayerCards = 0;
                                    saved = Game;
                                    //MAKE IT NOT HIT
                                    break;
                            }
                            break;
                    }
                    break;
            }
            break;
        }
if (saved == sMenu) {
    window.clear(sf::Color::Black);

    MainMenu.draw(window);

    window.display();
}
else if (saved == Options) {

}
else if (saved == Game) {
//IMPLEMENT GAME LOGIC ALL HERE? LOL I GUESS
    if (DealerCards == 0) {
        CardVal = MainDeck.CheckCard(window, 0, DealerHandVal);
        DealerHandVal += CardVal;
        CardVal = MainDeck.CheckCard(window, 1, DealerHandVal);
        DealerHandVal += CardVal;
        DealerCards = 2;
        std::cout << DealerHandVal;
    }

    if (PlayerCards == 0) {
        CardVal = MainDeck.CheckCard(window, 5, PlayerHandVal);
        PlayerHandVal += CardVal;
        CardVal = MainDeck.CheckCard(window, 6, PlayerHandVal);
        PlayerHandVal += CardVal;
        PlayerCards = 2;
        std::cout << PlayerHandVal;
    }
//WAIT FOR OPTION
//IMPLEMENT HIT/STAY COMMAND
    Decision = Decide;

    if (hitstay == 1) { //STAY
        if (DealerHandVal < PlayerHandVal) {
            while (DealerHandVal < 17) {
                CardVal = MainDeck.CheckCard(window, DealerCards, DealerHandVal);
                DealerHandVal += CardVal;
                DealerCards++;
            }
        }
        CheckforWin = 1;
    }

    if (hitstay == 2) {
        CardVal = MainDeck.CheckCard(window, (PlayerCards + 5), PlayerHandVal);
        PlayerHandVal += CardVal;
        PlayerCards++;
        if (PlayerHandVal > 21) {
            CheckforWin = 1;
        }
        hitstay = 0;
    }

    if (CheckforWin == 1) {
        //Win Condition
        if ((DealerHandVal > 21) || ((PlayerHandVal > DealerHandVal) && (PlayerHandVal < 21))) {
            std::cout << DealerHandVal;
            std::cout << "\n";
            std::cout << PlayerHandVal;
            std::cout << "\n";
            std::cout << "You Win!\n";
        }


        //Lose Condition
        if (((DealerHandVal > PlayerHandVal) && (DealerHandVal < 21)) || (PlayerHandVal > 21)) {
            std::cout << DealerHandVal;
            std::cout << "\n";
            std::cout << PlayerHandVal;
            std::cout << "\n";
            std::cout << "You Lose  :(\n";
        }


        //Tie Condition
        if (DealerHandVal == PlayerHandVal) {
            std::cout << DealerHandVal;
            std::cout << "\n";
            std::cout << PlayerHandVal;
            std::cout << "\n";
            std::cout << "Draw.\n";

        }
        saved = RoundWait;

    }


    window.clear(sf::Color::Black);
    Play.draw(window); //Draws Background
    window.draw(MainDeck.CardDisplay[0]);
    if (CheckforWin == 0) {
        window.draw(MainDeck.CardDisplay[10]);
    }
    //Dealer Cards
    if (CheckforWin != 0) {
        window.draw(MainDeck.CardDisplay[1]);
    }
    int DealerCardCheck = DealerCards;
    for (int i = 2; (DealerCardCheck - 2) > 0; i++) {
        window.draw(MainDeck.CardDisplay[i]);
        DealerCardCheck--;
    }
    //Player Cards
    window.draw(MainDeck.CardDisplay[5]);
    window.draw(MainDeck.CardDisplay[6]);
    int PlayerCardCheck = PlayerCards;
    for (int i = 7; (PlayerCardCheck - 2) > 0; i++) {
        window.draw(MainDeck.CardDisplay[i]);
        PlayerCardCheck--;
    }
    window.display();

}
else if(saved == RoundWait) {

    //resetting
    DealerHandVal = 0, CardVal = 0;
    PlayerHandVal = 0;
    hitstay = 0, CheckforWin = 0;
    State2 Decision = DoNothing;


    window.clear(sf::Color::Black);
    Play.draw(window); //Draws Background}
    window.clear(sf::Color::Black);
    Play.draw(window); //Draws Background
    //Dealer Cards
    window.draw(MainDeck.CardDisplay[0]);
    window.draw(MainDeck.CardDisplay[1]);
    int DealerCardCheck = DealerCards;
    for (int i = 2; (DealerCardCheck - 2) > 0; i++) {
        window.draw(MainDeck.CardDisplay[i]);
        DealerCardCheck--;
    }
    //Player Cards
    window.draw(MainDeck.CardDisplay[5]);
    window.draw(MainDeck.CardDisplay[6]);
    int PlayerCardCheck = PlayerCards;
    for (int i = 7; (PlayerCardCheck - 2) > 0; i++) {
        window.draw(MainDeck.CardDisplay[i]);
        PlayerCardCheck--;
    }
    window.display();
}

    }
    return 0;
}