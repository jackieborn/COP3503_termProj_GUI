#include "Game_State.h"

namespace State
{
    //constructor
    Game_State::Game_State(Application& application)
        //initialize list
        :m_p_application(&application) //initialize ptr m_p_application to point to application passed into class
        { }
}
