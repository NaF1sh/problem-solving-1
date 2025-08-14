#include <iostream>
#include <vector>
using namespace std;

bool isPossible(const vector<int> &b)
{
    int n = b.size();
    long long prefixSum = 0;
    for (int i = 0; i < n; ++i)
    {
        prefixSum += b[i];
        long long expectedSum = 1LL * (i + 1) * (i + 2) / 2;
        if (prefixSum < expectedSum)
            return false;
    }
    return true;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> b(n);
        for (int i = 0; i < n; ++i)
            cin >> b[i];
        cout << (isPossible(b) ? "YES\n" : "NO\n");
    }
    return 0;
}
