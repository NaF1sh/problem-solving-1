#include <bits/stdc++.h>
#define Team_blackslash return 0;
#define ll long long

using namespace std;

int main()
{
    ll int N;
    cin >> N;

    ll int sum_of_squares = (N * (N + 1) * (2 * N + 1)) / 6;

    cout << sum_of_squares;
}