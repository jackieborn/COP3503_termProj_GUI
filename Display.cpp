#include "Display.h"

#include <memory>



namespace Display
{

    /* SFNL provides cross-platform way to open window to run to:
        sf::RenderWindow - opens window on creation
        Use unique_ptr to control when initialized. */
    std::unique_ptr<sf::RenderWindow> window;

    void init()
    {
        //initialize unique_ptr ^^
        //VideoMode = how big you want window to be
        //"Window" = what we want window to be named
        window = std::make_unique<sf::RenderWindow>(sf::VideoMode(WIDTH, HEIGHT), "Window");

    }

    void clear()
    {
        //can call functions directly from sf::RenderWindow
        window->clear(); //clears window to back
    }

    void display()
    {
        //can call functions directly from sf::RenderWindow
        window->display(); //displays whatever we've drawn to window
    }

    void checkWindowEvents()
    {
        /* sf::Event = object
            Asks window what window events currently happening
            - window checks each type of event (e.g. if "x"-out clicked
            - stores results in sf::Event object
            - programmer handles events*/

        sf::Event e; //create sf::Event object

        //ask what events are happening & stores in sf::Event obj e
        while(window->pollEvent(e)){
            //if "x" clicked, window closes
            if(e.type == sf::Event::Closed){
                window->close();
            }
        }
    }

    bool isOpen()
    {
        //can call functions directly from sf::RenderWindow
        return window->isOpen(); //checks if Window open
    }
}
