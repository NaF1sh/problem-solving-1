#include <iostream>
#include <unordered_map>

int find_min_m(int s)
{
    std::unordered_map<int, int> seen; // Stores terms and their first occurrence index
    int current_term = s;
    int index = 1;

    while (true)
    {
        if (seen.find(current_term) != seen.end())
        {
            return seen[current_term]; // Term repeats, return the first occurrence index
        }
        seen[current_term] = index;
        if (current_term % 2 == 0)
        {
            current_term /= 2;
        }
        else
        {
            current_term = 3 * current_term + 1;
        }
        index++;
    }
}

int main()
{
    int s = 8;
    int min_m = find_min_m(s);
    std::cout << "The minimum index m is: " << min_m << std::endl; // Output should be 5
    return 0;
}
