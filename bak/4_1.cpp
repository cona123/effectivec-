#include "4_1.h"
Directory::Directory()
{
    std::size_t disks = tfs().numDisks();
    std::cout<<"disks:"<<disks<<std::endl;
}

Directory& tempDir()
{
    static Directory td;
    return td;
}
