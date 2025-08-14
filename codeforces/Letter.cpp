#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define fastread()           \
    ios::sync_with_stdio(0); \
    cin.tie(0);

void solve()
{
    string a, b;
    getline(cin, a);
    getline(cin, b);

    multiset<char> a1(a.begin(), a.end());

    for (size_t i = 0; i < b.size(); i++)
    {
        if (b[i] == ' ')
            continue;

        auto it = a1.find(b[i]);
        if (it != a1.end())
        {
            a1.erase(it); 
        }
        else
        {
            cout << "NO";
            return;
        }
    }

    cout << "YES";
}

int main()
{
    fastread();
    solve();
    return 0;
}