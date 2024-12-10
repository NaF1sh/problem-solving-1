#include <bits/stdc++.h>
#define Team_blackslash return 0;
#define ll long long

using namespace std;

int main()
{

    ll cases, cpul, ml;
    cin >> cases >> cpul >> ml;

    while (cases--)
    {
        ll int ts, cpu, m;

        cin >> ts >> cpu >> m;

        if (cpu > cpul)
        {
            cout << "CLE";
            Team_blackslash
        }
        else if (m > ml)
        {
            cout << "MLE";
            Team_blackslash
        }
        else if (ts != 0)
        {
            cout << "WA";
            Team_blackslash
        }
    }
    cout << "AC";
}