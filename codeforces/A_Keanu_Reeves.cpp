#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define cases(n) \
    ll n;        \
    cin >> n;    \
    while (n--)
bool isGoodString(const string &str)
{
    int count0 = 0, count1 = 0;
    for (char ch : str)
    {
        if (ch == '0')
            count0++;
        else if (ch == '1')
            count1++;
    }
    return count0 != count1;
}

int main()
{
    int n;
    string s;
    cin >> n >> s;

    if (isGoodString(s))
    {

        cout << 1 << endl;
        cout << s << endl;
    }
    else
    {

        cout << 2 << endl;
        cout << s[0] << " ";
        for (int i = 1; i < n; i++)
        {
            cout << s[i];
        }
        cout << endl;
    }

    return 0;
}
