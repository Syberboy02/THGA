#include <SFML/Graphics.hpp>
#include <iostream>


void testWindow() {
    sf::RenderWindow window(sf::VideoMode(1700, 900), "Test scherm");
    window.setVerticalSyncEnabled(true);
    sf::CircleShape player(50);
    player.setFillColor(sf::Color::Yellow);
    player.setPosition(500, 500);

    sf::Sprite sprite;
    sf::Texture texture;
    texture.loadFromFile("sprite3.jpg");
    
    sprite.setTexture(texture);
    
    while (window.isOpen()) {

        sf::Event event;
        sf::CircleShape shapeLeft(100.f);
        shapeLeft.setFillColor(sf::Color::Green);
        shapeLeft.setPosition(0, 250);
        sf::CircleShape shapeRight(100.f);
        shapeRight.setFillColor(sf::Color::Green);
        shapeRight.setPosition(500, 250);
        sf::CircleShape shapeUp(100.f);
        shapeUp.setFillColor(sf::Color::Green);
        shapeUp.setPosition(250, 0);
        sf::CircleShape shapeDown(100.f);
        shapeDown.setFillColor(sf::Color::Green);
        shapeDown.setPosition(250, 250);

        





        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed) {
                window.close();
            }
            if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
            {
                shapeLeft.setFillColor(sf::Color::Red);

                player.move(-5, 0);
            }
            if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
            {
                shapeRight.setFillColor(sf::Color::Red);
                player.move(+5, 0);
            }
            if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up))
            {
                shapeUp.setFillColor(sf::Color::Red);
                player.move(0, -5);
            }
            if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down))
            {
                shapeDown.setFillColor(sf::Color::Red);
                player.move(0, +5);
            }

                
            window.clear();
            window.draw(shapeLeft);
            window.draw(shapeRight);
            window.draw(shapeUp);
            window.draw(shapeDown);
            ///window.draw(player);
            window.draw(sprite);
            window.display();
        }
    }
}

int main()
{
    testWindow();
}