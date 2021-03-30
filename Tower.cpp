#include "Tower.hpp"
#include <stdlib.h>
#include <iostream>

using namespace std;

Tower::Tower()
{
    this->top = NULL;
    this->count = 0;
}

Disk* Tower::pop() //pop shoudl removes and returns a value
{
    //remove top element and return it or just return NULL if there is no top 
    if(count == 0)
    {
        return NULL;
    }
    else
    {
        Disk* oldTop = this->top;
        this->top = this->top->getNextDisk();
        oldTop->setNextDisk(NULL); //this allows the guy to remove all connectivity to the stack
        count--;
        return oldTop;
    }
}

Disk* Tower::peek()
{
    return this->top;
}

void Tower::push(Disk* d)
{
    //add an element to the top of the stack
        d->setNextDisk(this->top);
        this->top = d;
        count++;
}

void Tower::display()
{
    //cout on each disks toString for the entire tower 

    Disk* nextDisk = this->top;

    for(int i = 0; i < this->count; i++)
    {
        cout << nextDisk->toString() << endl;
        nextDisk = nextDisk->getNextDisk();
    }
}