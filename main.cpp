#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <iostream>
#include <math.h>
#include "menu.h"
#include "Game.h"
#define SFML_NO_DEPRECATED_WARNINGS

int main() {
    enum State {sMenu, Options, Game};
    State saved = sMenu;
    int CardDraw = 0;
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
                    switch (event.type) {
                        case sf::Event::KeyPressed:
                            switch (event.key.code) {
                                case sf::Keyboard::Return:
                                    MainDeck.CheckCard(window);
                                    break;
                                case sf::Keyboard::Space:
                                    MainDeck.CheckCard(window);
                                    break;
                            }
                     break;
                    }
            }
        }
if (saved == sMenu) {
    window.clear(sf::Color::Black);

    MainMenu.draw(window);

    window.display();
}
else if (saved == Options) {

}
else if (saved == Game) { //Make new GameStart State to initialize cards etc? before moving to actual game state
    window.clear(sf::Color::Black);
    Play.draw(window);
    //Can Change card location by changing num (We will have dealer location, player locations, etc....
    window.draw(MainDeck.CardDisplay[1]);

    window.display();

}

    }
    return 0;
}