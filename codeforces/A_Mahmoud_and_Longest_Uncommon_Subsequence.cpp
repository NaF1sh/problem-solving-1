#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int main()
{
    string input1, input2;
    cin >> input1 >> input2;

    if (input1 == input2)
    {
        cout << -1 << endl;
    }
    else
    {
        cout << max(input1.length(), input2.length()) << endl;
    }

    return 0;
}
