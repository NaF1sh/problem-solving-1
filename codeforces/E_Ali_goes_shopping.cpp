#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

int main()
{
    string A;
    cin >> A;

    int n = A.size();
    unordered_map<string, int> substring_count;

    // Step 1: Generate all substrings and count occurrences
    for (int i = 0; i < n; ++i)
    {
        string current = "";
        for (int j = i; j < n; ++j)
        {
            current += A[j];
            substring_count[current]++;
        }
    }

    // Step 2: Find the substring with the maximal repeat count
    string result = "";
    int max_count = 0;

    for (const auto &pair : substring_count)
    {
        const string &substring = pair.first;
        int count = pair.second;

        // Update result based on max count and lexicographical order
        if (count > max_count || (count == max_count && substring > result))
        {
            max_count = count;
            result = substring;
        }
    }

    // Output the result
    cout << result << endl;

    return 0;
}
