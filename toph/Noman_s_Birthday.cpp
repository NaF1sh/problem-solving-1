#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin >> n;

    string ballon;
    cin >> ballon;
    for (int i = 1; i < ballon.size(); i++)
    {

        if (ballon[i] == ballon[i - 1])
        {
            cout << "Change needed";
            return 0;
        }
    }
    cout << "No change needed";
}