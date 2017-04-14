#ifndef GAME_STATE_H_INCLUDED
#define GAME_STATE_H_INCLUDED

class Application; //because we're using pointers to Application (not actually storing an app)

namespace State
{
    class Game_State
    {
    public:
        //constructor
        Game_State(Application& application); //passes in address of application

        virtual void input() = 0;
        virtual void udpate(float dt) = 0;
        virtual void draw() = 0;

    protected:
        //Game_State class has ptr to application so it itself can change the state of the game
        //  ex: in Playing_State & hit ESC to pause, you can then call app to push pause onto stack
        //      from Playing_State
        Application* m_p_application;
    };
}


#endif // GAME_STATE_H_INCLUDED
