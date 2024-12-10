#include <bits/stdc++.h>
using namespace std;

int main()
{

    string input;
    cin >> input;
    int a = 1;
    int b = 2;
    int c = 3;

    for (char ch : input)
    {
        if (ch == '1' && a >= 0)
        {
            a--;
        }
        else if (ch == '2' && b >= 0)
        {
            b--;
        }
        else if (ch == '3' && c >= 0)
        {
            c--;
        }
    }
    if (a == 0 && b == 0 && c == 0)
    {
        cout << "Yes";
    }

    else
    {
        cout << "No";
    }
}