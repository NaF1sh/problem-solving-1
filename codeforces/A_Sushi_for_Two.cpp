#include <iostream>
#include <vector>
using namespace std;

int longest_valid_sushi_segment(vector<int> &sushi)
{
    int n = sushi.size();
    vector<int> groups;

    // Count consecutive groups of sushi types
    int count = 1;
    for (int i = 1; i < n; i++)
    {
        if (sushi[i] == sushi[i - 1])
        {
            count++;
        }
        else
        {
            groups.push_back(count);
            count = 1;
        }
    }
    groups.push_back(count);

    // Find the maximum valid segment
    int max_length = 0;
    for (int i = 1; i < groups.size(); i++)
    {
        max_length = max(max_length, 2 * min(groups[i - 1], groups[i]));
    }

    return max_length;
}

int main()
{
    int n;
    cin >> n;
    vector<int> sushi(n);
    for (int i = 0; i < n; i++)
    {
        cin >> sushi[i];
    }

    cout << longest_valid_sushi_segment(sushi) << endl;
    return 0;
}
