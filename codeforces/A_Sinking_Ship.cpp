#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define cases(n) \
    ll n;        \
    cin >> n;    \
    while (n--)
#define fastread()           \
    ios::sync_with_stdio(0); \
    cin.tie(0);

void solve()
{
    ll m;
    cin >> m;
    vector<string> cap;
    vector<string> rat;
    vector<string> women_child;
    vector<string> man;
    string captain;
    for (size_t i = 0; i < m; i++)
    {
        string first;
        string second;
        cin >> first >> second;
        if (second == "rat")
        {
            rat.push_back(first);
        }
        else if (second == "woman" || second == "child")
        {
            women_child.push_back(first);
        }
        else if (second == "captain")
        {
            captain = first;
        }
        else if (second == "man")
        {
            man.push_back(first);
        }
        else
        {
            cap.push_back(first);
        }
    }
    for (size_t i = 0; i < rat.size(); i++)
    {
        cout << rat[i] << endl;
    }

    for (size_t i = 0; i < women_child.size(); i++)
    {
        cout << women_child[i] << endl;
    }
    for (size_t i = 0; i < man.size(); i++)
    {
        cout << man[i] << endl;
    }

    for (size_t i = 0; i < cap.size(); i++)
    {
        cout << cap[i] << endl;
    }

    cout << captain << endl;
}

int main()
{
    fastread();

    solve();

    return 0;
}