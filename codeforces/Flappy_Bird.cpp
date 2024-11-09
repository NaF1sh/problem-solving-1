#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t; // Number of test cases

    for (int case_num = 1; case_num <= t; ++case_num)
    {
        int n;
        cin >> n; // Number of moves
        vector<int> moves(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> moves[i];
        }

        int height = 1;
        int reversals = 0;
        vector<int> prefix(n + 1, 0); // To track prefix sums

        prefix[0] = 1; // Initial height

        for (int i = 0; i < n; ++i)
        {
            prefix[i + 1] = prefix[i] + moves[i];
        }

        int min_height = *min_element(prefix.begin(), prefix.end());

        if (min_height >= 0)
        {
            cout << "Case " << case_num << ": 0" << endl;
        }
        else
        {
            int deficit = abs(min_height);
            reversals = (deficit + 1) / 2;
            cout << "Case " << case_num << ": " << reversals << endl;
        }
    }

    return 0;
}
