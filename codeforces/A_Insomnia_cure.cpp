#include <iostream>
using namespace std;

int main()
{
    long long k, l, m, n, d;
    cin >> k >> l >> m >> n >> d;

    long long count = 0;
    for (long long i = 1; i <= d; i++)
    {
        if (i % k == 0 || i % l == 0 || i % m == 0 || i % n == 0)
        {
            count++;
        }
    }

    cout << count;
    return 0;
}