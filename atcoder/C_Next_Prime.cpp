#include <bits/stdc++.h>

using namespace std;
bool is_prime(int num)
{
    if (num <= 1)
        return false;
    if (num <= 3)
        return true;
    if (num % 2 == 0 || num % 3 == 0)
        return false;
    for (int i = 5; i * i <= num; i += 6)
    {
        if (num % i == 0 || num % (i + 2) == 0)
            return false;
    }
    return true;
}

int find_min_prime(int X)
{
    while (!is_prime(X))
    {
        X++;
    }
    return X;
}

int main()
{
    int X;
    cin >> X;
    int min_prime = find_min_prime(X);
    cout << min_prime << endl;
    return 0;
}
