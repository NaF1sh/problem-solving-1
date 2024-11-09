#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n;
    cin >> n;

    int count = 0;

    while (n--)
    {
        int num;
        cin >> num;
        if (num >= 80)
        {
            count++;
        }
    }
    cout << count;
}
