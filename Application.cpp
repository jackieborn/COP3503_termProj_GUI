#include "Application.h"
#include "Display.h" //so we can use display namespace
#include "states/Playing_State.h"



Application::Application() //constructor
{
    Display::init(); //initialize & open Window

    pushState(std::make_unique<State::Playing>(*this)); //push Playing state onto State stack
}

//main game loop
void Application::runMainLoop()
{
    //game loops while window is open
    while(Display::isOpen()){

        Display::checkWindowEvents(); //checks for events

        Display::clear(); //clears window

        //returns what's at top of stack
        m_states.top()->input(); //input            //m_states.top()->update(0.0f);
        m_states.top()->update(0.0f); //update      //0.0f can be used as a placeholder for code
        m_states.top()->draw(); //draw

        Display::display(); //displays whatever has been drawn
    }
}

void Application::pushState(std::unique_ptr<State::Game_State>state)
{
    m_states.push(std::move(state)); /*unique_ptr is non-copyable class
                                       usually when pushing onto stack, it copies object in
                                       if you try copying unique_ptr in, get a compiler error
                                       std::move solves this*/
}

void Application::popState()
{
    m_states.pop(); //pops object at top of stack
}

void Application::changeState(std::unique_ptr<State::Game_State>state)
{
    popState();
    pushState(std::move(state));
}
