#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define cases(n) \
    ll n;        \
    cin >> n;    \
    while (n--)

int main()
{
    set<pair<string, string>> stones;
    stones.insert(make_pair("Time", "green"));
    stones.insert(make_pair("Mind", "yellow"));
    stones.insert(make_pair("Soul", "orange"));
    stones.insert(make_pair("Power", "purple"));
    stones.insert(make_pair("Reality", "red"));

    stones.insert(make_pair("Space", "blue"));

    ll n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        string input;
        cin >> input;
        for (auto it = stones.begin(); it != stones.end();)
        {
            if (it->second == input)
            {
                it = stones.erase(it);
            }
            else
            {
                ++it;
            }
        }
    }

    cout << stones.size() << endl;
    for (const auto &stone : stones)
    {
        cout << stone.first << endl;
    }

    return 0;
}
