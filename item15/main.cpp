#include "Font.h"
int main()
{
    Font f(getFont());
    int newfontsize = 1;
    changeFontSize(f,newfontsize);
    return 0;
}