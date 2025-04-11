#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int main()
{
    string a;
    cin >> a;
    ll a1;
    cin >> a1;

    vector<string> months = {"January", "February", "March", "April", "May",
                             "June", "July", "August", "September", "October", "November", "December"};

    ll cm = 0;
    for (size_t i = 0; i < 12; i++)
    {
        if (months[i] == a)
        {
            cm = i;
            break;
        }
    }

    ll ans = (cm + a1) % 12;
    if (ans < 0)
    {
        ans += 12;
    }

    cout << months[ans] << endl;

    return 0;
}