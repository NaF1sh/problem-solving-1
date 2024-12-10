#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        string input;
        cin >> input;

        ll size = input.size();
        ll count = 0;
        for (char c : input)
        {
            if (c > '0')
                count++;
        }
        cout << count << endl;
        for (int i = 0; i < size; i++)
        {
            if (input[i] > '0')
            {
                cout << input[i];

                for (int j = size - 1; j > i; j--)
                {
                    cout << "0";
                }
                cout << " ";
            }
        }
        cout << endl;
    }
}
