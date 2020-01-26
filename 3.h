
#include<string>
#include <iostream>
class TextBlock {
    public:
        TextBlock(std::string s) {
            text = std::move(s);
        }
        const char& operator[](std::size_t position) const{
            std::cout<<"using const"<<std::endl;
            return text[position];
        }
        char& operator[](std::size_t position){//use char&,or bt[0] = 'a' will no use
            std::cout<<"using not const"<<std::endl;
            return text[position];
        }
    private:
        std::string text;

};

class CTextBlock {
    public:
        CTextBlock(std::string s ) {
            pText = &s[0] ;
        }
        const char& operator[](std::size_t position) const {
            return pText[position];
        }
        char& operator[](std::size_t position) {
            return const_cast<char&>(static_cast<const CTextBlock&>(*this)[position]);
        }
        std::size_t length() const {
            a = 1; //a / b must mutable
            b = 1;
        }
    private:
        char* pText;
        mutable int a = 0;
        mutable int b = 0;
};