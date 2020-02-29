#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <iostream>

int main() {
    sf::ContextSettings settings;
    settings.antialiasingLevel = 8;
    sf::RenderWindow window(sf::VideoMode(800, 600), "SFML window");
// Display the list of all the video modes available for fullscreen
    std::vector<sf::VideoMode> modes = sf::VideoMode::getFullscreenModes();
    for (std::size_t i = 0; i < modes.size(); ++i) {
        sf::VideoMode mode = modes[i];
        std::cout << "Mode #" << i << ": "
                  << mode.width << "x" << mode.height << " - "
                  << mode.bitsPerPixel << " bpp" << std::endl;
    }
// Create a window with the same pixel depth as the desktop
    sf::VideoMode desktop = sf::VideoMode::getDesktopMode();
    window.create(sf::VideoMode(1024, 768, desktop.bitsPerPixel), "SFML window", sf::Style::Fullscreen);


    sf::Font font;
    if (!font.loadFromFile("../assets/fonts/OpenSans-Bold.ttf")) {
        return EXIT_FAILURE;
    }
    sf::Text text("Hello World", font);


    text.setCharacterSize(32);

    text.setPosition(window.getSize().x/2 - text.getGlobalBounds().width/2,

                     window.getSize().y/2 - text.getGlobalBounds().height/2);

    window.setVerticalSyncEnabled(true); // call it once, after creating the window

    while(window.isOpen()){


        sf::Event event;

// while there are pending events...
        while (window.pollEvent(event)) {
            // check the type of the event...
            switch (event.type) {
                // window closed
                case sf::Event::Closed:
                    std::cout << "Window has been closed, program ended" << std::endl;
                    window.close();
                    break;

                case sf::Event::KeyPressed:
                {








                }
            }
        }

        window.clear(sf::Color::Black);

        window.draw(text);

        window.display();

        }
return 0;
}