#include <iostream>

#include <SFML/Graphics.hpp>

#include "Application.h"
#include "Util/Random.h"

/* Main Game Loop (typically has 6 parts)
    1. Checks for window events (e.g. click "x" out)
    2. Clear window of all color
    3. Check user input (e.g. key presses)
    4. Update game (bulk of game logic)
    5. Draw scene (draws one at a time to off-screen buffer)
    6. Display scene to window
This happens multiple times per second (fps)
    ex: 6p fps = loops 60 times per sec */


/* Game States:
        Ex's: splash screen, start menu, first game scene
    Each Game State does 3 main things:
        1. Input from user
        2. Update whatever is going on
        3. Draw scene
    Each state inherits from a base Game State class
        - Each child class implements input/update/draw functions
        - Application class stores std stack of unique_ptr's to Game states
    Reason to use stack:
        - ex: if player in Playing State & pauses, push the Pause State to top of stack
                then when player returns, can easily pop Pause State off top of stack*/







int main()
{
    Random::init();
    for(int i=0; i<10; i++){
        std::cout << Random::floatInRange(0.5, 2.9) << std::endl;
    }


    //Application app; //create application obj

    //app.runMainLoop();

    return 0;
}

