#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{

    ll n, pen, note;
    cin >> n >> pen >> note;

    if (n <= pen && n <= note)
        cout << "Yes";
    else
    {
        cout << "No";
    }
}