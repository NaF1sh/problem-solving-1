#include <bits/stdc++.h>
using namespace std;

int main()
{

    int cases;
    cin >> cases;
    int i = 0;
    while (cases--)
    {
        i++;
        int a, b;
        cin >> a >> b;

        int sum1 = a + b;
        int sum2 = a - b;

        cout << "Case " << i << ": " << sum1 << sum2 << endl;
    }
}