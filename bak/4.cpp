#include "4.h"
#include "4_1.h"
// ABEntry::ABEntry(const std::string& name,const std::string& address,
//         const std::list<PhoneNumber>& phones):theName(name),theAddress(address),
//         thePhones(phones),numTimesConsulted(0)//initializations,good, numTimesConsulted must initialize
//         //initialize order by variable declaration ,not order by initialization list 
//         {
//             // theName = name; assignments,not good
//             // theAddress = address;
//             // thePhones = phones;
//             // numTimesConsulted = 0;
//         }

size_t FileSystem::numDisks() const
{
    return 5;
}

FileSystem& tfs() {
    static FileSystem fs;
    return fs;
}
int main()
{
   // std::list<PhoneNumber> phonelist;
  //  ABEntry abentry("","",phonelist);
    tempDir();
}