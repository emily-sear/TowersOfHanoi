#include "Game.hpp"
#include <iostream>

using namespace std;

Game::Game()
{
    for(int i = 0; i < 3; i++)
    {
        this->theTowers[i] = new Tower();
    }

    for(int j = 3; j > 0; j--)
    {
        this->theTowers[0]->push(new Disk(j));
    }
}

void Game::display()
{
    for(int i = 0; i < 3; i++)
    {
        this->theTowers[i]->display();
    }
}
