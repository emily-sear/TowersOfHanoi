#include <iostream>
#include "Game.hpp"

using namespace std;

int main(int argc, char* argv)
{
    Game* newGame = new Game();

    newGame->display();

    return 0;
}