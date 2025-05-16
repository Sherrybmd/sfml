#include <SFML/Graphics.hpp>
#include <SFML/Window/Event.hpp>

int main(void)
{
    // make window obj
    sf::RenderWindow window(sf::VideoMode(200, 200), "sfml working mate");
    // make shape obj
    sf::CircleShape shape(100.f);
    shape.setFillColor(sf::Color::Red);

    while(window.isOpen())
    {
        // create event
        sf::Event event;
        while (window.pollEvent(event))
        {
            //check if event is of closing kind ?
            if ( event.type == sf::Event::Closed )
                window.close();
        }
        window.clear();
        window.draw(shape);
        window.display();
    }
    return 0;
}

// compile with g++ -c 'name'.cpp
// build executable with g++ 'name'.o -o 'app-name' -lsfml-graphics -lsfml-window -lsfml-system

// OR JUST USE g++ sfml-test.cpp -o sfml-new-app -lsfml-graphics -lsfml-window -lsfml-system
