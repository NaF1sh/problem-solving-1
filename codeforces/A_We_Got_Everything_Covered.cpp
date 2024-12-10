#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        string result;
        for (int i = 0; i < k; ++i)
        {
            result += 'a' + i;
        }
        while (n--)
        {
            cout << result;
        }
        cout << endl;
    }
    return 0;
}
