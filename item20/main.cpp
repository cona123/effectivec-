#include "person.h"
int main()
{
    Student s;
    std::cout <<"constructed finish"<<std::endl;
    bool platoIsOK = ValidateStudent(s);
    std::cout <<"platoIsOK finish"<<std::endl;

    getpersontype(s);

}