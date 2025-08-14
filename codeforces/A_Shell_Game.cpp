#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define fastread()           \
    ios::sync_with_stdio(0); \
    cin.tie(0);

void solve()
{
    ifstream inFile("input.txt");
    ofstream outFile("output.txt");

    ll initial;
    inFile >> initial;
    ll turns = 3;
    ll ball = initial;

    while (turns--)
    {
        ll a, b;
        inFile >> a >> b;

        if (ball == b)
        {
            ball = a;
        }
        else if (ball == a)
        {
            ball = b;
        }
    }

    outFile << ball;

    inFile.close();
    outFile.close();
}

int main()
{
    fastread();
    solve();
    return 0;
}