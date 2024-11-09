#include <bits/stdc++.h>
using namespace std;

int main()
{
    int cases;
    cin >> cases;

    while (cases--)
    {
        int n;
        cin >> n;

        string A, B;
        cin >> A >> B;

        vector<int> diff;
        for (int i = 0; i < n; i++)
        {
            if (A[i] != B[i])
                diff.push_back(i);
        }

        if (diff.size() == 2 && A[diff[0]] == A[diff[1]] && B[diff[0]] == B[diff[1]])
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
    return 0;
}
