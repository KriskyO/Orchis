#include <SFML/Graphics.hpp>
#include <iostream>

int main() //initialize
{
    sf::RenderWindow window(sf::VideoMode({640, 480}), "hi");

    //load huff
    sf::Texture huffTexture("assets/huffman0.png", false, sf::IntRect({0, 0}, {32, 50}));
    sf::Sprite huffSprite(huffTexture);
    huffSprite.setScale(sf::Vector2f(2, 2));

    while (window.isOpen()) //loop
    {
        while (const std::optional event = window.pollEvent())
        {
            if (event->is<sf::Event::Closed>())
                window.close();
        }

    sf::Vector2f position = huffSprite.getPosition();

        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::D))
    {
        huffSprite.setPosition(position + sf::Vector2f(1, 0));
    }

        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::A))
    {
        huffSprite.setPosition(position + sf::Vector2f(-1, 0));
    }

        //draw
        window.clear();
        window.draw(huffSprite);
        window.display();
    }
}
