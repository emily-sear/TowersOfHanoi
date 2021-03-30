#include "Disk.hpp"
#include <stdlib.h>

Disk::Disk(int length)
{
    this->length = length;
    this->nextDisk = NULL;
}

int Disk::getSize()
{
    this->length;
}

Disk* Disk::getNextDisk()
{
    return this->nextDisk;
}

void Disk::setNextDisk(Disk* nextDisk)
{
    this->nextDisk = nextDisk;
}

std::string Disk::toString()
{
    //return a string that has a number of equal signs that is twie the size 
    std::string answer = "";
    for(int i = 0; i < this->length; i++)
    {
        answer += "==";
    }
    return answer;
}