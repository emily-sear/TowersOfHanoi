#include "Tower.hpp"
class Game
{
    private: 
        Tower* theTowers[3]; //the cool kid way would be to use malloc

    public:
        Game(); //set up our initial three towers with the disks on the far left 
        void display(); // display the 3 towers on the machine (can be virtually)
        

};