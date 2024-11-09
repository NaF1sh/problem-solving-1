#include <bits/stdc++.h>
using namespace std;

int main()
{

    string s;

    getline(cin, s);

    int size = s.length();

    for (int i = size - 1; i >= 0; i--)
    {
        cout << s[i];
    }
}