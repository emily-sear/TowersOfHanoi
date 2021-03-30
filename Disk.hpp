#include <string>

class Disk 
{
    private:
        int length;
        Disk* nextDisk;
    
    public: 
        Disk(int length);
        int getSize();
        Disk* getNextDisk();
        void setNextDisk(Disk* nextDisk);
        std::string toString();

};