#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    while (m--)
    {
        string n1 = to_string(n);
        if (n1[n1.size() - 1] == '0')
        {
            n = n / 10;
        }
        else
        {
            n = n - 1;
        }
    }
    cout << n << endl;
    return 0;
}
