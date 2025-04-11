#include <bits/stdc++.h>
using namespace std;

#define fastread()           \
    ios::sync_with_stdio(0); \
    cin.tie(0);

bool isVowel(char c)
{
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}

void solve()
{
    string a, b;
    cin >> a >> b;

    if (a.size() != b.size())
    {
        cout << "No" << endl;
        return;
    }

    for (size_t i = 0; i < a.size(); i++)
    {
        char c = a[i];
        char d = b[i];

        if ((isVowel(c) && !isVowel(d)) || (!isVowel(c) && isVowel(d)))
        {
            cout << "No" << endl;
            return;
        }
    }

    cout << "Yes" << endl;
}

int main()
{
    fastread();

       solve();

    return 0;
}