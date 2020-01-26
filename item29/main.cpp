#include"prettymenu.h"
int main()
{
    std::shared_ptr<PMImpl> temp = std::make_shared<PMImpl>();
    temp->bgImage = std::make_shared<char>('a');
    temp->imageChanges = 0;
    PrettyMenu prettymenu(temp);
    prettymenu.print();
    std::shared_ptr<PMImpl> temp2 = std::make_shared<PMImpl>();
    temp2->bgImage = std::make_shared<char>('b');
    temp2->imageChanges = 1;
    prettymenu.changebackground(temp2);
    prettymenu.print();
    return 1;
}