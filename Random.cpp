#include "Random.h"

#include <cstdlib>
#include <ctime>

namespace Random
{
    void init()
    {
        //uses current time as seed for random numb gen
        srand(time(nullptr));
    }

    int intInRange(int low, int high)
    {
        /* How rand() works:
                rand() % 100 = 0 to 99
                rand() % 100 +1 = 1 to 100
                rand() % 7 +50 = 50 to 57 */

        return rand() % (high - low +1) + low;
        //gens random int in range of low to high
    }


    /* Modular % only works with integers, not floats
        Must multiple floats by 100 to convert to integers*/

    float floatInRange (float low, float high)
    {
        int newLow = low * 100;
        int newHigh = high * 100;

        return (float)intInRange(newLow, newHigh) / 100;
    }
}
