#include <SFML/Graphics.hpp>
#include <iostream>

using namespace std::chrono_literals;

int main()
{
    sf::Font font;
    if (!font.loadFromFile("/Users/million/Downloads/DroidSans.ttf"))
    {
        std::cout << "Can not load font file.\n";
        return 1;
    }
    sf::Text text("Hello World!", font, 40);
    sf::RenderWindow window(sf::VideoMode(300, 200), "Hello World!");
    text.setPosition(40, 70);
    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }
        window.clear();
        window.draw(text);
        window.display();
    }
    return 0;
}
