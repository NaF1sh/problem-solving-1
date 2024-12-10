#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{

    ll cases;

    cin >> cases;

    while (cases--)
    {
        string word;
        cin >> word;

        for (int i = word.size() / 2 - 1; i >= 0; i--)
        {
            cout << word[i];
        }
        cout << endl;
    }
}