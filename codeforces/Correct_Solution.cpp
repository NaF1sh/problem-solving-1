#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define fastread()           \
    ios::sync_with_stdio(0); \
    cin.tie(0);

string smallest_number(string n)
{
    sort(n.begin(), n.end());
    if (n[0] == '0')
    {
        for (size_t i = 1; i < n.size(); ++i)
        {
            if (n[i] != '0')
            {
                swap(n[0], n[i]);
                break;
            }
        }
    }
    return n;
}

void solve()
{
    string n, m;
    cin >> n >> m;
    string correct_answer = smallest_number(n);
    if (correct_answer == m)
    {
        cout << "OK" << endl;
    }
    else
    {
        cout << "WRONG_ANSWER" << endl;
    }
}

int main()
{
    fastread();
    solve();
    return 0;
}