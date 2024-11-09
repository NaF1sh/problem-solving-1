#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long N, X;
    cin >> N >> X;

    long long remainder = N % X;

    long long result = min(remainder, X - remainder);

    cout << result << endl;

    return 0;
}
