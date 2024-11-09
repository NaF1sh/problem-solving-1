#include <bits/stdc++.h>
using namespace std;

int main()
{

    string s;

    getline(cin, s);

    int size = s.length();

    for (int i = 0; i < size; i++)
    {

        if (s[i] != 32)
            cout << s[i];
    }
}