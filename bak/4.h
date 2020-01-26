#pragma once
#include<string>
#include<list>
#include<iostream>
// class PhoneNumber {};
// class ABEntry {
//     public:
//         ABEntry(const std::string& name,const std::string& address,
//         const std::list<PhoneNumber>& phones);
//     private:
//         std::string theName;
//         std::string theAddress;
//         std::list<PhoneNumber> thePhones;
//         int numTimesConsulted;
// };

// class FileSystem {
//     public:
//         std::size_t numDisks() const;
// };
// extern FileSystem tfs;

class FileSystem {
    public:
        std::size_t numDisks() const;
};
extern FileSystem& tfs();
