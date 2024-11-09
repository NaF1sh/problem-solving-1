#include <bits/stdc++.h>
#define Team_blackslash return 0;
using namespace std;

int main()
{

    long long int a, b;

    cin >> a >> b;

    long long int low = 1;
    long long int high = a;
    long long int mid = 0;
    long long int count = 0;
    while (low < high)
    {
        mid = (low + high) / 2;

        count++;

        if (b > mid)
        {
            low = mid + 1;
        }
        else
        {
            high = mid;
        }
    }

    cout << count;
    Team_blackslash;
}
