#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll int n;
    cin >> n;
    vector<string> words(n);

    for (int i = 0; i < n; i++)
    {
        cin >> words[i];
    }

    ll int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        string word1;
        cin >> word1;

        bool found = false;
        for (int i1 = 0; i1 < n; i1++)
        {
            if (words[i1] == word1)
            {
                cout << "yes" << endl;
                found = true;
                break;
            }
        }
        if (!found)
        {
            cout << "no" << endl;
        }
    }

    return 0;
}
