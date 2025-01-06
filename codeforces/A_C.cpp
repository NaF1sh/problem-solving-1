#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        long long a, b, n;
        cin >> a >> b >> n;
        int operations = 0;

        while (a <= n && b <= n)
        {
            if (a > b)
                swap(a, b);
            a += b;
            operations++;
        }

        cout << operations << endl;
    }
    return 0;
}
