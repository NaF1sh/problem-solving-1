#include <iostream>
#include <vector>

using namespace std;

bool isAlmostLucky(int n)
{
    vector<int> luckyNumbers = {4, 7};

    int i = 0;
    while (luckyNumbers[i] <= n)
    {
        luckyNumbers.push_back(luckyNumbers[i] * 10 + 4);
        luckyNumbers.push_back(luckyNumbers[i] * 10 + 7);
        i++;
    }

    for (int luckyNumber : luckyNumbers)
    {
        if (n % luckyNumber == 0)
        {
            return true;
        }
    }

    return false;
}

int main()
{
    int n;
    cin >> n;

    if (isAlmostLucky(n))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}