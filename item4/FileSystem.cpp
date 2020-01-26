#include "FileSystem.h"
ABEntry::ABEntry(const std::string& name,const std::string& address,
        const std::list<PhoneNumber>& phones):theName(name),theAddress(address),
        thePhones(phones),numTimesConsulted(0)//initializations,good, numTimesConsulted must initialize
        //initialize order by variable declaration ,not order by initialization list 
        {
            // theName = name; assignments,not good
            // theAddress = address;
            // thePhones = phones;
            // numTimesConsulted = 0;
        }

size_t FileSystem::numDisks() const
{
    return 5;
}

FileSystem& tfs()
{
    FileSystem tf;
    return tf;
}