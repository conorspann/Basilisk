

#include <iostream>


int main(int argc, char * argv[])
{
    if (argc != 2) {
        std::cout << "Usage: basilisk <input>" << std::endl;

        return -1;
    }

    std::cout << "Basilisk Compiler v0.1" << std::endl;

    return 0;
}
