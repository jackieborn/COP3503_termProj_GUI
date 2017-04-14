#include "Playing_State.h"
#include "Application.h"
#include "Display.h"

#include <iostream>

namespace State
{
    Playing::Playing(Application& application)
            :Game_State(application) //pass Game_State into base State
            {}
    {

    }

    void Playing::input()
    {

    }

    void Playing::update(float dt)
    {

    }

    void Playing::draw()
    {
        std::cout << "Playing state works" << std::endl;
    }


}
