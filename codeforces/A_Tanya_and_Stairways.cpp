#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{

    ll t;
    cin >> t;

    ll tc = 0;
    ll count = 0;
    bool flag = false;
    vector<int> s;
    for (int i = 0; i < t; i++)
    {
        ll a;
        cin >> a;
        if (a == 1)
        {
            if (count > 0)
                s.push_back(count);
            tc++;
            count = 0;
        }
        count++;
    }
    if (count > 0)
    {
        s.push_back(count);
    }
    cout << tc << endl;
    for (int i = 0; i < s.size(); i++)
    {
        cout << s[i] << " ";
    }
}