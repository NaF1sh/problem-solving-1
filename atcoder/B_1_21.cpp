#include <iostream>
#include <cmath>

using namespace std;

bool isPerfectSquare(int num)
{
    int root = sqrt(num);
    return root * root == num;
}

int main()
{
    int a, b;
    cin >> a >> b;

    int concatenatedNumber = stoi(to_string(a) + to_string(b));

    if (isPerfectSquare(concatenatedNumber))
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }

    return 0;
}
