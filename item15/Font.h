#ifndef FONT_H_
#define FONT_H_
#include <iostream>
char* getFont();
void releaseFont(char* fh);
void changeFontSize(char* f,int newsize);
class Font {
  public:
    explicit Font(char* fh) : f(fh) {}
    ~Font() {releaseFont(f);}
    char* get() const {return f;}
    operator char*() const {return f;}
  private:
    char* f;
};

#endif