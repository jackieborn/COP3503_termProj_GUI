#ifndef RANDOM_H_INCLUDED
#define RANDOM_H_INCLUDED

//where random functions will go
namespace Random
{
    void init(); //initialize random number generator

    int intInRange(int low, int high); //low & high bound of rand num gen

    float floatInRange (float low, float high); //low & high bound of rand num gen
}

#endif // RANDOM_H_INCLUDED
