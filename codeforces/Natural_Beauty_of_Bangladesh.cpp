#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    if (n == 0)
    {
        cout << 1 << endl;
    }
    else
    {
        int ltDC[] = {8, 4, 2, 6};
        cout << ltDC[(n - 1) % 4] << endl;
    }

    return 0;
}