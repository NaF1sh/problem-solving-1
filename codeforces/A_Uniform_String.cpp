#include <iostream>
#include <vector>

void generateString(int n, int k)
{
    std::string result;
    for (int i = 0; i < n; ++i)
    {
        result += 'a' + (i % k);
    }
    std::cout << result << std::endl;
}

int main()
{
    int t;
    std::cin >> t;
    while (t--)
    {
        int n, k;
        std::cin >> n >> k;
        generateString(n, k);
    }
    return 0;
}
