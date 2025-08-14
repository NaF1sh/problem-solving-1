#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define fastread()           \
    ios::sync_with_stdio(0); \
    cin.tie(0);

const double EPS = 1e-7;
const int MAX_ITER = 100;

double solveEquation(int A, int B, int C)
{
    double low = 0, high = (double)C / A, mid;
    for (int i = 0; i < MAX_ITER; ++i)
    {
        mid = (low + high) / 2;
        double val = A * mid + B * sin(mid);
        if (val < C)
        {
            low = mid;
        }
        else
        {
            high = mid;
        }
    }
    return mid;
}

void solve()
{
    int T;
    cin >> T;
    while (T--)
    {
        int A, B, C;
        cin >> A >> B >> C;
        double x = solveEquation(A, B, C);
        cout << fixed << setprecision(6) << x << "\n";
    }
}

int main()
{
    fastread();
    solve();
    return 0;
}