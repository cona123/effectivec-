#include "Font.h"
#include <iostream>
char* getFont() {
    char* a = new char('a');
    return a;
}
void releaseFont(char* fh) {
    fh = nullptr;
    delete fh;
}
void changeFontSize(char* f,int newsize) {
        std::cout<< "changeFontSize" <<std::endl;
    std::cout<< f<<std::endl;
        std::cout<< f<<std::endl;

}