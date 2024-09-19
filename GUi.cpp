#include <SFML/Window.hpp>

int main() {
    // Create a window with the title "SFML Window" and a resolution of 800x600 pixels
    sf::Window window(sf::VideoMode(800, 600), "SFML Window");

    // Run the program as long as the window is open
    while (window.isOpen()) {
        // Check all the window's events that were triggered since the last iteration of the loop
        sf::Event event;
        while (window.pollEvent(event)) {
            // "Close requested" event: we close the window
            if (event.type == sf::Event::Closed)
                window.close();
        }
    }

    return 0;
}