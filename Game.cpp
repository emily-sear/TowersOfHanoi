#include "Game.hpp"
#include <iostream>
#define MAX_TOWERS 3
#define MAX_DISKS 3

using namespace std;

Game::Game()
{
    for(int i = 0; i < MAX_TOWERS; i++)
    {
        this->theTowers[i] = new Tower(); //arrays in C++ don't know how to report their length
    }

    for(int j = MAX_DISKS; j > 0; j--)
    {
        this->theTowers[0]->push(new Disk(j));
    }
}

void Game::display()
{
    for(int i = 0; i < MAX_TOWERS; i++)
    {
        this->theTowers[i]->display();
    }
}
