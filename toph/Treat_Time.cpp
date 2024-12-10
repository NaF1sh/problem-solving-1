#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{

    ll int A, B, C;

    cin >> A >> B >> C;

    if (A >= B && A >= C)
    {
        cout << "Chocolate";
    }
    else if (A < B && A < C)
    {
        cout << "Chocolate";
    }
    else if (A < B && A >= C)
    {
        cout << "Ice-cream";
    }
    else
    {
        cout << "Chocolate";
    }
}