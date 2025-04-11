#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define cases(n) \
    ll n;        \
    cin >> n;    \
    while (n--)
#define fastread()           \
    ios::sync_with_stdio(0); \
    cin.tie(0);

int main()
{
    fastread();

    string s;
    cin >> s;

    ll half = s.size() / 2;
    bool is_odd = s.size() % 2 != 0;

    string first_half = s.substr(0, half);
    string second_half = s.substr(half);

    if (is_odd)
        second_half = s.substr(half + 1);

    reverse(second_half.begin(), second_half.end());

    for (size_t j = 0; j < first_half.size(); j++)
    {
        if (first_half[j] == '?')
            first_half[j] = second_half[j];
    }
    for (size_t j = 0; j < second_half.size(); j++)
    {
        if (second_half[j] == '?')
            second_half[j] = first_half[j];
    }
    reverse(second_half.begin(), second_half.end());

    if (is_odd)
        cout << first_half << s[half] << second_half << endl;
    else
        cout << first_half << second_half << endl;
}
