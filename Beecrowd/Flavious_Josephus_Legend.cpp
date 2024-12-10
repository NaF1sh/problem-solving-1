#include <iostream>

using namespace std;

int josephus(int n, int k)
{
    int p = 0; // Index of the person to be killed
    for (int i = 2; i <= n; i++)
    {
        p = (p + k) % i;
    }
    return p + 1;
}

int main()
{
    int nc;
    cin >> nc;

    for (int i = 1; i <= nc; i++)
    {
        int n, k;
        cin >> n >> k;
        cout << "Case " << i << ": " << josephus(n, k) << endl;
    }

    return 0;
}