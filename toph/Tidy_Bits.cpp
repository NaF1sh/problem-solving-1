#include <bits/stdc++.h>
using namespace std;

int smallest_same_ones(int n)
{
    int target_ones = bitset<32>(n).count();
    int current_num = 1;

    while (true)
    {
        if (bitset<32>(current_num).count() == target_ones)
        {
            return current_num;
        }
        ++current_num;
    }
}

int main()
{
    int n;
    cin >> n;
    cout << smallest_same_ones(n) << std::endl;
    return 0;
}
