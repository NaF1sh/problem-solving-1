#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int main()
{

    int t;
    cin >> t;

    ll array[t];
    ll sum = 0;
    for (int i = 0; i < t; i++)
    {
        cin >> array[i];

        sum += array[i];
    }

    ll numpp = sum / (t / 2);

    for (int i = 0; i < t; i++)
    {
        for (int j = 0; j < t; j++)
        {
            if (i != j && array[i] + array[j] == numpp)
            {
                cout << i + 1 << " " << j + 1 << endl;
                array[i] = 0;
                array[j] = 0;
                break;
            }
        }
    }
}