#include <bits/stdc++.h>

using namespace std;
int solution()
{
}
int main()
{

    string recipe;
    cin >> recipe;

    int np, ns, nc;
    cin >> np >> ns >> nc;

    int pb, ps, pc;
    cin >> pb >> ps >> pc;
    int rube;
    cin >> rube;
    int B = 0;
    int S = 0;
    int C = 0;

    for (char c : recipe)
    {

        if (c == 'B')
            B++;
        else if (c == 'S')
            S++;
        else if (c == 'C')
            C++;
    }
    int np1 = np / B;
    int ns1 = ns / S;
    int nc1 = nc / C;

    int total = max(np1, max(ns1, nc1));
    cout << total;
}