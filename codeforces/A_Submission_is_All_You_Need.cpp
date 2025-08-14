#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> freq(101, 0);
        for (int i = 0; i < n; ++i)
        {
            int x;
            cin >> x;
            freq[x]++;
        }

        int mex1 = 0, mex2 = 0;

        // First mex
        for (int i = 0; i <= 100; ++i)
        {
            if (freq[i] > 0)
            {
                freq[i]--;
            }
            else
            {
                mex1 = i;
                break;
            }
        }

        // Second mex
        for (int i = 0; i <= 100; ++i)
        {
            if (freq[i] > 0)
            {
                freq[i]--;
            }
            else
            {
                mex2 = i;
                break;
            }
        }

        cout << (mex1 + mex2) << "\n";
    }
}
