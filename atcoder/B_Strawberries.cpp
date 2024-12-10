#include <bits/stdc++.h>
using namespace std;

int main()
{

    int k, N;
    cin >> k >> N;
    int count = 0;
    int count1 = 0;
    while (k--)
    {

        char c;
        cin >> c;

        if (c == 'O')
        {
            count1++;
        }
        else if (c == 'X')
        {
            count1 = 0;
        }
        if (c == 'O' && count1 == N)
        {
            count++;
            count1 = 0;
        }
    }
    cout << count;
}
