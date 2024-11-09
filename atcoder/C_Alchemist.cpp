#include <bits/stdc++.h>
using namespace std;

int main()
{
    int cases;
    cin >> cases;
    vector<double> n(cases);

    for (int i = 0; i < cases; i++)
    {
        cin >> n[i];
    }

    sort(n.begin(), n.end());

    double maxTaste = n[0];
    for (int i = 1; i < cases; i++)
    {
        maxTaste = (maxTaste + n[i]) / 2.0;
    }

    cout << maxTaste << endl;

    return 0;
}
