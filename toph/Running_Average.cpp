#include <bits/stdc++.h>

using namespace std;

int main()
{
    cout.precision(11);
    int cases;
    cin >> cases;
    long double sum = 0;

    for (int i = 1; i <= cases; i++)
    {
        int a;
        cin >> a;
        sum += a;
        long double avrg = sum / i;

        cout << avrg << endl;
    }
}