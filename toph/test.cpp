#include <iostream>
#include <string>

int main()
{
    std::string original_string = "Hello, world!";
    std::string new_string = original_string.substr(0, 3);
    std::cout << new_string << std::endl;
    return 0;
}
