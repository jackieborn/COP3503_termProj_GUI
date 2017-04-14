#ifndef PLAYING_STATE_H_INCLUDED
#define PLAYING_STATE_H_INCLUDED

#include "Game_State.h"

namespace State
{
    //class Playing inherits from public Game_State
    class Playing : public Game_State
    {
    public:

        Playing(Application& application); //constructor

        //override makes compiler check if functions ACTUALLY override the function
        void input() override;
        void update(float dt);
        void draw() override;

    private:

    };
}

#endif // PLAYING_STATE_H_INCLUDED
