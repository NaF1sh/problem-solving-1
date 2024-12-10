#include <iostream>
using namespace std;

int mofizAddition(int a, int b)
{
    return a ^ b;
}

int main()
{
    int a, b;
    while (cin >> a >> b)
    {
        cout << mofizAddition(a, b) << endl;
    }
    return 0;
}
