#include <SFML/Graphics.hpp>
#include <iostream>
#include <vector>
#include <string>
#include <list>


sf::Vector2f startingPos;
int velocityY = 0;
int velocityX = 0;
float accelerationX = 0;
int accelerationY = 0;
int gravity = 5;
int moveCount = 0;
int jumpCount = 0;
bool collision;
bool isGrounded;
bool isLeft;
int level = 0;
bool newLevel = true;
sf::Texture bg2;
sf::Texture platformTexture;

std::vector<sf::RectangleShape> platforms = {};
std::vector<sf::Shape> sprites = {};
std::vector<sf::RectangleShape> goals = {};
std::vector<sf::RectangleShape> bg = {};
std::vector<std::string> fileLoc = {};


void level1() {
    //level 1 layout
    platforms.clear();
    goals.clear();
    sprites.clear();
    fileLoc.clear();

    startingPos = sf::Vector2f(500, 500);

    fileLoc.push_back("C:/GLP/SFMLx32-0/ice3.jpg");
    fileLoc.push_back("C:/GLP/SFMLx32-0/Ice_M.png");
   
    sf::RectangleShape borderLeft;
    borderLeft.setSize(sf::Vector2f(10, 1080));
    borderLeft.setPosition(sf::Vector2f(0, 0));
    platforms.push_back(borderLeft);

    sf::RectangleShape borderRight;
    borderRight.setSize(sf::Vector2f(10, 1080));
    borderRight.setPosition(sf::Vector2f(1919, 0));
    platforms.push_back(borderRight);

    sf::RectangleShape floor;
    floor.setSize(sf::Vector2f(1000, 10));
    floor.setPosition(sf::Vector2f(200, 750));
    platforms.push_back(floor);


    sf::RectangleShape platform1;
    platform1.setSize(sf::Vector2f(250, 10));
    platform1.setPosition(sf::Vector2f(1300, 500));
    platforms.push_back(platform1);

    sf::RectangleShape platform2;
    platform2.setSize(sf::Vector2f(500, 10));
    platform2.setPosition(sf::Vector2f(500, 400));
    platforms.push_back(platform2);

    sf::RectangleShape muur;
    muur.setSize(sf::Vector2f(10, 500));
    muur.setPosition(sf::Vector2f(50, 250));
    platforms.push_back(muur);

    sf::RectangleShape goal;
    goal.setSize(sf::Vector2f(25, 25));
    goal.setFillColor(sf::Color::Cyan);
    goal.setPosition(sf::Vector2f(550, 325));
    goals.push_back(goal);
}



void level2() {
    //level 2 layout
    platforms.clear();
    goals.clear();
    sprites.clear();
    fileLoc.clear();
    startingPos = sf::Vector2f(1000, 600);
        
    fileLoc.push_back("C:/GLP/SFMLx32-0/cave.png");
    fileLoc.push_back("C:/GLP/SFMLx32-0/Ice_M.png");

    sf::RectangleShape borderLeft;
    borderLeft.setSize(sf::Vector2f(10, 1080));
    borderLeft.setPosition(sf::Vector2f(0, 0));
    platforms.push_back(borderLeft);

    sf::RectangleShape borderRight;
    borderRight.setSize(sf::Vector2f(10, 1080));
    borderRight.setPosition(sf::Vector2f(1919, 0));
    platforms.push_back(borderRight);

    sf::RectangleShape floor;
    floor.setSize(sf::Vector2f(1000, 10));
    floor.setPosition(sf::Vector2f(200, 750));
    platforms.push_back(floor);


    sf::RectangleShape platform1;
    platform1.setSize(sf::Vector2f(250, 10));
    platform1.setPosition(sf::Vector2f(500, 600));
    platforms.push_back(platform1);

    sf::RectangleShape platform2;
    platform2.setSize(sf::Vector2f(500, 10));
    platform2.setPosition(sf::Vector2f(1000, 200));
    platforms.push_back(platform2);

    sf::RectangleShape muur;
    muur.setSize(sf::Vector2f(10, 500));
    muur.setPosition(sf::Vector2f(1500, 250));
    platforms.push_back(muur);

    sf::RectangleShape goal;
    goal.setSize(sf::Vector2f(25, 25));
    goal.setFillColor(sf::Color::Cyan);
    goal.setPosition(sf::Vector2f(1050, 150));
    goals.push_back(goal);

}


void level3() {
    //level 3 layout
    platforms.clear();
    goals.clear();
    sprites.clear();
    fileLoc.clear();

    fileLoc.push_back("C:/GLP/SFMLx32-0/boot2.png");
    fileLoc.push_back("C:/GLP/SFMLx32-0/Ice_M.png");

    startingPos = sf::Vector2f(800, 700);

    sf::RectangleShape borderLeft;
    borderLeft.setSize(sf::Vector2f(10, 1080));
    borderLeft.setPosition(sf::Vector2f(0, 0));
    platforms.push_back(borderLeft);

    sf::RectangleShape borderRight;
    borderRight.setSize(sf::Vector2f(10, 1080));
    borderRight.setPosition(sf::Vector2f(1919, 0));
    platforms.push_back(borderRight);

    sf::RectangleShape floor;
    floor.setSize(sf::Vector2f(500, 10));
    floor.setPosition(sf::Vector2f(800, 800));
    platforms.push_back(floor);


    sf::RectangleShape platform1;
    platform1.setSize(sf::Vector2f(500, 10));
    platform1.setPosition(sf::Vector2f(200, 500));
    platforms.push_back(platform1);

    sf::RectangleShape platform2;
    platform2.setSize(sf::Vector2f(500, 10));
    platform2.setPosition(sf::Vector2f(950, 200));
    platforms.push_back(platform2);


    sf::RectangleShape goal;
    goal.setSize(sf::Vector2f(25, 25));
    goal.setFillColor(sf::Color::Cyan);
    goal.setPosition(sf::Vector2f(1100, 150));
    goals.push_back(goal);
}

void level4() {
    //level 4 layout
    platforms.clear();
    goals.clear();
    sprites.clear();
    fileLoc.clear();

    fileLoc.push_back("C:/GLP/SFMLx32-0/iets2.png");
    fileLoc.push_back("C:/GLP/SFMLx32-0/Ice_M.png");

    startingPos = sf::Vector2f(200, 700);

    sf::RectangleShape borderLeft;
    borderLeft.setSize(sf::Vector2f(10, 1080));
    borderLeft.setPosition(sf::Vector2f(0, 0));
    platforms.push_back(borderLeft);

    sf::RectangleShape borderRight;
    borderRight.setSize(sf::Vector2f(10, 1080));
    borderRight.setPosition(sf::Vector2f(1919, 0));
    platforms.push_back(borderRight);

    sf::RectangleShape floor;
    floor.setSize(sf::Vector2f(200, 10));
    floor.setPosition(sf::Vector2f(200, 800));
    platforms.push_back(floor);

    sf::RectangleShape platform1;
    platform1.setSize(sf::Vector2f(200, 10));
    platform1.setPosition(sf::Vector2f(200, 450));
    platforms.push_back(platform1);

    sf::RectangleShape platform2;
    platform2.setSize(sf::Vector2f(200, 10));
    platform2.setPosition(sf::Vector2f(300, 450));
    platforms.push_back(platform2);

    sf::RectangleShape platform3;
    platform3.setSize(sf::Vector2f(200, 10));
    platform3.setPosition(sf::Vector2f(700, 450));
    platforms.push_back(platform3);

    sf::RectangleShape platform4;
    platform4.setSize(sf::Vector2f(200, 10));
    platform4.setPosition(sf::Vector2f(950, 200));
    platforms.push_back(platform4);


    sf::RectangleShape goal;
    goal.setSize(sf::Vector2f(25, 25));
    goal.setFillColor(sf::Color::Cyan);
    goal.setPosition(sf::Vector2f(950, 150));
    goals.push_back(goal);
}

void nextLevel() {
    level++;
    std::cout << level;
    if (level == 1)
    {
        level1();
    }
    else if (level == 2)
    {
        level2();
    }
        else if (level == 3)
    {
        level3();
    }
        else if (level == 4)
    {
        level4();
    }
    else
    {
        std::cout << "level nog niet geimplementeerd";
        level--;
    }
}

void lastLevel() {
    level--;
    if (level < 1){
        level = 1;
    }
    std::cout << level << std::endl;
    if (level == 1)
    {
        level1();
    }
    else if (level == 2)
    {
        level2();
    }
    else if (level == 3)
    {
        level3();
    }
    else if (level == 4)
    {
        level4();
    }
    else
    {
        std::cout << "level nog niet geimplementeerd";
    }
}


void testWindow() {
    sf::RenderWindow window(sf::VideoMode::getDesktopMode(), "Dante's Ascension", sf::Style::Fullscreen);
    window.setVerticalSyncEnabled(true);

    sf::Texture jumpAni;
    if (!jumpAni.loadFromFile("C:/GLP/SFMLx32-0/dante_squat_left.png")) {
        std::cerr << "Error while loading texture" << std::endl;
    }
    sf::Texture danteLeft;
    if (!danteLeft.loadFromFile("C:/GLP/SFMLx32-0/dante_left.png")) {
        std::cerr << "Error while loading texture" << std::endl;
    }
    sf::Texture danteRight;
    if (!danteRight.loadFromFile("C:/GLP/SFMLx32-0/dante_right.png")) {
        std::cerr << "Error while loading texture" << std::endl;
    }
    danteRight.setSmooth(true);
    jumpAni.setRepeated(true);
    danteLeft.setSmooth(true);
    danteLeft.setRepeated(true);
    danteRight.setSmooth(true);
    danteRight.setRepeated(true);
    sf::Sprite player;
    player.setScale(3, 3);
    player.setTexture(danteRight);
    sf::RectangleShape background;





    while (window.isOpen()) {

        sf::Event event;


        if (newLevel == true) 
        {
            nextLevel();
            player.setPosition(startingPos);
            bg2.loadFromFile(fileLoc[0]);
            platformTexture.loadFromFile(fileLoc[1]);

            bg2.setSmooth(true);
            background.setTexture(&bg2);
            background.setSize(sf::Vector2f(1920, 1080));
            newLevel = false;

            for (sf::RectangleShape plat : platforms ){
                plat.setTexture(&platformTexture);
            }

        }

        if (player.getGlobalBounds().top > 900)
        {
            sf::Vector2f lastpos = player.getPosition();
            lastLevel();
            player.setPosition(sf::Vector2f(lastpos.x, lastpos.y-900));
            bg2.loadFromFile(fileLoc[0]);
            platformTexture.loadFromFile(fileLoc[1]);

            bg2.setSmooth(true);
            background.setTexture(&bg2);
            background.setSize(sf::Vector2f(1920, 1080));
        }

            
        if (player.getGlobalBounds().intersects(goals[0].getGlobalBounds()))
           {//check goal reached
            newLevel = true;
           }




        //collision check
        for (int i = 0; i < platforms.size(); i++)
        {
            if (player.getGlobalBounds().intersects(platforms[i].getGlobalBounds()))
            {
                if (platforms[i].getGlobalBounds().top + platforms[i].getGlobalBounds().height > player.getGlobalBounds().top + player.getGlobalBounds().height &&
                    player.getGlobalBounds().top + player.getGlobalBounds().height / 2 <= platforms[i].getGlobalBounds().top)
                {//Bottom of the Player
                    velocityY = 0;
                    isGrounded = true;
                    collision = true;
                    break;
                }
                else if (platforms[i].getGlobalBounds().top > player.getGlobalBounds().top && 
                    player.getGlobalBounds().top + player.getGlobalBounds().height / 2 >= platforms[i].getGlobalBounds().top + platforms[i].getGlobalBounds().height)
                {//Top of the player
                    collision = true;
                    velocityY = gravity;
                    jumpCount = 0;
                    break;
                }
                else if (player.getGlobalBounds().left <= platforms[i].getGlobalBounds().left + platforms[i].getGlobalBounds().width)
                {//Left side of the player
                    if (velocityX > 0)
                    {
                        velocityX = -velocityX;
                    }
                    else if (velocityX < 0)
                    {
                        velocityX = abs(velocityX);
                    }
                    break;
                }
                else if (platforms[i].getGlobalBounds().left  > player.getGlobalBounds().left + player.getGlobalBounds().width)
                {//Right side of the player
                    if (velocityX > 0)
                    {
                        velocityX = -velocityX;
                    }
                    else if (velocityX < 0)
                    {
                        velocityX = abs(velocityX);
                    }
                    break;
                }
            }
            isGrounded = false;
            collision = false;
        }

        //vertical movement
        if (isGrounded == false)
        {
            if (jumpCount > 0)
            {
                velocityY = -5;
                player.move(velocityX, velocityY);
                jumpCount -= 1;
            }
            else
            {
                velocityY = gravity;
                player.move(velocityX, velocityY);
            }
        }
 
        //horizontal movement
        if (moveCount > 0)
        {
            player.move(velocityX, 0);
            moveCount -= 1;
        }




        //input check
        while (window.pollEvent(event)) {

            if (sf::Keyboard::isKeyPressed(sf::Keyboard::Q))
            {//next level
                nextLevel();
                bool pressed = true;
                while (pressed == true)
                {
                    if (!sf::Keyboard::isKeyPressed(sf::Keyboard::Q)) {
                        pressed = false;
                    }
                }

            }


            if (sf::Keyboard::isKeyPressed(sf::Keyboard::R))
            {//reset location
                player.setPosition(startingPos);
                bool isPressed = true;
                while (isPressed == true)
                {
                    if (!sf::Keyboard::isKeyPressed(sf::Keyboard::R))
                    {
                        isPressed = false;
                    }
                }
            }

            if (event.type == sf::Event::Closed)
            {//close window
                window.close();
            }
            if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
            {//movement left
                    player.setTexture(danteLeft);
                if (isGrounded == false) 
                {
                    if (velocityX >= -4)
                    {
                        velocityX -= 1;
                    }
                }
                else
                {
                    velocityX = -5;
                    moveCount = 1;
                }

            }
            if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
            {//movement right
                player.setTexture(danteRight);
                if (isGrounded == false)
                {
                    if (velocityX <= 4)
                    {
                        velocityX += 1;
                    }
                }
                else
                {
                    velocityX = 5;
                    moveCount = 1;
                }
            }
            if (sf::Keyboard::isKeyPressed(sf::Keyboard::Escape))
            {
                window.close();
            }


            if (sf::Keyboard::isKeyPressed(sf::Keyboard::Space))
            {//Jump
                if (isGrounded == true) 
                {
                    player.setTexture(jumpAni);
                    velocityX = 0;
                    bool pressed = true;
                    int count = 0;
                    while (pressed == true) {
                            if (sf::Keyboard::isKeyPressed(sf::Keyboard::Space)) {
                            count++;    
                            sf::sleep(sf::milliseconds(8));
                            }
                            else 
                            {
                                pressed = false;
                            }
                    }

                    player.move(0, -5);
                    isGrounded = false;
                    if (count > 100)
                    {
                        jumpCount = 100;
                    }
                    else if(count < 20)
                    {
                        jumpCount = 20;
                    }
                    else
                    {
                        jumpCount = count;
                    }                    
                }
                
            }

        }

        //draw assets
        window.clear();

        window.draw(background);
        for (int i = 0; i < sprites.size(); i++) {
            window.draw(sprites[i]);
        }
        for (int i = 0; i < platforms.size(); i++) {
            window.draw(platforms[i]);
        }
        window.draw(goals[0]);
        window.draw(player);

        window.display();

    }
}



int main()
{
    testWindow();
}