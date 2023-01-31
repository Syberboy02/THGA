//#include <SFML/Graphics.hpp>
//#include <iostream>
//int W = 900, H = 600;
//
//int main() {
//    int changeX = 0;
//    int changeY = 0;
//    sf::RenderWindow window(sf::VideoMode(W, H), "My window");
//    sf::Texture texture;
//    texture.loadFromFile("C:/GLP/SFMLx32-0/Blood.png");
//    sf::Sprite sprite;
//    sprite.setTexture(texture);
//    //sf::Vector2i source(50,400);
//    int direction = 1, shiftX = 10;
//
//
//    while (window.isOpen()) {
//        sf::Event event;
//        while (window.pollEvent(event)) {
//            switch (event.type) {
//            case sf::Event::Closed:
//                window.close();
//                break;
//                break;
//            case sf::Event::KeyPressed:
//                if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left)){
//                    shiftX += 50;
//                }
//                else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right)){
//                    shiftX -= 50;
//                }
//                if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up)) {
//                     direction++;
//                    }
//                else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down)){
//                    direction--;
//                    }
//                break;
//            }
//
//        }
//        if (shiftX < 0) {
//            shiftX = 500;
//        }
//        else if (shiftX > 500) {
//            shiftX = 0;
//        }
//        if (direction > 2) {
//            direction = 0;
//        }
//        else if (direction < 0) {
//            direction = 2;
//        }
//        sprite.move(changeX, changeY);
//        sprite.setPosition(shiftX, 400);
//        sf::IntRect pos(200 * direction, 0, 190, 192);
//        window.clear();
//        sprite.setTextureRect(pos);
//        window.draw(sprite);
//        window.display();
//    }
//}