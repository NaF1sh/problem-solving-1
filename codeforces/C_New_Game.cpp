#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>

using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int &x : a)
        cin >> x;

    // Sort the array to process numbers in order
    sort(a.begin(), a.end());

    unordered_map<int, int> freq;
    int max_cards = 0, left = 0;

    // Sliding window approach
    for (int right = 0; right < n; right++)
    {
        freq[a[right]]++;

        while (freq.size() > k)
        { // If distinct numbers exceed k, shrink window
            if (--freq[a[left]] == 0)
                freq.erase(a[left]);
            left++;
        }

        max_cards = max(max_cards, right - left + 1);
    }

    cout << max_cards << '\n';
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
