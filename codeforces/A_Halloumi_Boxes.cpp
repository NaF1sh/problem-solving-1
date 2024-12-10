#include <bits/stdc++.h>
using namespace std;

bool check_non_dec(int boxes[], int n, int k)
{
    if (k == 1)
    {
        int copy[n];

        for (int i = 0; i < n; i++)
        {
            copy[i] = boxes[i];
        }

        sort(copy, copy + n);
        for (int i = 0; i < n; i++)
        {
            if (copy[i] != boxes[i])
            {
                return false;
            }
        }
        return true; 
    }
    return true;
}

int main()
{
    int cases;
    cin >> cases;

    while (cases--)
    {
        int n, k;
        cin >> n >> k;
        int boxes[n];
        for (int i = 0; i < n; i++)
        {
            cin >> boxes[i];
        }
        if (check_non_dec(boxes, n, k))
        {
            cout << "YES" << "\n";
        }
        else
        {
            cout << "NO" << "\n";
        }
    }
    return 0;
}
