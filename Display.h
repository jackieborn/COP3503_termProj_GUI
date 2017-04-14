#ifndef DISPLAY_H_INCLUDED
#define DISPLAY_H_INCLUDED

#include <SFML/Graphics.hpp> //allows us to create window

namespace Display   //store Window in namespace

{
    void init(); //initialize Window

    void clear(); //clear Window

    void display(); //Update/Display window

    void checkWindowEvents(); //Checks Window events

    bool isOpen(); //Checks if window open

    //size of window - can be any size you want
    constexpr int HEIGHT    = 720;
    constexpr int WIDTH     = 1280;

}



#endif // DISPLAY_H_INCLUDED
