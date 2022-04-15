#include <iostream>
#include <string>

int main()
{
    std::string name;
    std::cout << "What is your name?" << std::endl;
    std::cin >> name;
    std::cout << "Hello " << name << "!" << std::endl;

#include "c-echo.h"

int main(int argv, char** argc) {
    std::cout << "Count of output: " << count(echo(argv,argc)) << std::endl;
}
    return 0;
}
