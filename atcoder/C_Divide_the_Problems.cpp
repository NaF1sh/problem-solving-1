#include <bits/stdc++.h>
using namespace std;

int main()
{

    int cases;
    cin >> cases;

    vector<int> probs(cases);

    for (int i = 0; i < cases; i++)
    {
        cin >> probs[i];
    }

    sort(probs.begin(), probs.end());

    int cas = cases / 2;

    int ans = probs[cas] - probs[cas - 1];

    cout << ans;
}