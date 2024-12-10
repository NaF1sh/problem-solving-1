#include <bits/stdc++.h>
#define Team_blackslash return 0;
#define ll long long

using namespace std;

int main()
{

    ll int pm;
    cin >> pm;

    ll int a, b, c;
    cin >> a >> b >> c;

    if (pm - min(a, min(b, c)) >= 10)
    {
        cout << "Yes :-D";
    }
    else
    {
        cout << "No :-(";
    }
}