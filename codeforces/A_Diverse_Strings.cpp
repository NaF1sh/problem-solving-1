#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define cases(n) \
    ll n;        \
    cin >> n;    \
    while (n--)

int main()
{

    cases(n)
    {

        string input;
        cin >> input;
        bool flag = true;
        sort(input.begin(), input.end());
        for (int i = 0; i < input.size() - 1; i++)
        {
            if (input[i + 1] - input[i] != 1)
            {
                flag = false;
                break;
                ;
            }
        }
        if (flag)
        {
            cout << "Yes";
        }
        else
        {
            cout << "No";
        }
        cout << endl;
    }
}