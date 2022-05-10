module;
#include <iostream>
#include <string>

export module utils.out;

module {
    void print(std::string text)
    {
        std::cout << text << std::endl;
    }
}