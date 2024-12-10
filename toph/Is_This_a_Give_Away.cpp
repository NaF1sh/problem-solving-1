#include <iostream>
#include <string>
#include <algorithm>

int main()
{
    std::string s = "{{}{}{}}";
    int current_depth = 0;
    int max_depth = 0;

    for (char c : s)
    {
        if (c == '{')
        {
            current_depth++;
            max_depth = std::max(max_depth, current_depth);
        }
        else if (c == '}')
        {
            current_depth--;
        }
    }

    std::cout << "Maximum depth of balanced braces: " << max_depth << std::endl;
    return 0;
}
