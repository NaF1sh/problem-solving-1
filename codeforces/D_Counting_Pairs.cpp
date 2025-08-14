#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>

// This function solves a single test case.
void solve()
{
    int n;
    long long x, y;
    std::cin >> n >> x >> y;

    std::vector<long long> a(n);
    long long total_sum = 0;
    for (int i = 0; i < n; ++i)
    {
        std::cin >> a[i];
        total_sum += a[i];
    }

    // Step 1: Rephrase the condition with algebra.
    // We need to find pairs (a[i], a[j]) such that:
    // x <= total_sum - (a[i] + a[j]) <= y
    // After rearranging, this becomes:
    // total_sum - y <= a[i] + a[j] <= total_sum - x
    long long lower_sum_bound = total_sum - y;
    long long upper_sum_bound = total_sum - x;

    // Step 2: Sort the array to enable efficient searching.
    std::sort(a.begin(), a.end());

    long long interesting_pairs_count = 0;

    // Step 3: Iterate through each element a[i].
    for (int i = 0; i < n; ++i)
    {
        // For the current a[i], we need to find a partner a[j] (where j > i)
        // such that the condition is met.
        // The required range for a[j] is:
        long long min_partner_val = lower_sum_bound - a[i];
        long long max_partner_val = upper_sum_bound - a[i];

        // Step 4: Use binary search to count valid partners.
        // We search in the subarray to the right of a[i] to ensure j > i.
        auto search_start_it = a.begin() + i + 1;

        // Find the first element that is >= min_partner_val.
        // This is the beginning of our valid block of partners.
        auto lower_it = std::lower_bound(search_start_it, a.end(), min_partner_val);

        // Find the first element that is > max_partner_val.
        // This is the end of our valid block of partners.
        auto upper_it = std::upper_bound(search_start_it, a.end(), max_partner_val);

        // The number of valid partners is the distance between these two iterators.
        interesting_pairs_count += std::distance(lower_it, upper_it);
    }

    std::cout << interesting_pairs_count << std::endl;
}

int main()
{
    // Fast I/O
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int t;
    std::cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}
