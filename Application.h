#ifndef APPLICATION_H_INCLUDED
#define APPLICATION_H_INCLUDED

#include <memory> //allows use of unique_ptr's
#include <stack>

#include "states/Game_State.h"

class Application
{
public:
    Application(); //constructor

    void runMainLoop(); //where we store main game loop

    void pushState(std::unique_ptr<State::Game_State> state); //u_ptr to Game_State named "state"

    void popState();

    void changeState(std::unique_ptr<State::Game_State> state); //pops & pushes state at same time

private:
    //creates Stack data structure to store game states
    //stack of unique_ptr to Game_State - stack named m_states
    std::stack<std::unique_ptr<State::Game_State>>m_states;

};

#endif // APPLICATION_H_INCLUDED
