#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    string s;
    cin >> s;

    // Frequency array for characters 'a' to 'z'
    vector<int> freq(26, 0);

    // Count the frequency of each character
    for (char c : s)
    {
        freq[c - 'a']++;
    }

    // Variables to store the half and the middle part of the palindrome
    string half = "", middle = "";

    // Check frequency of characters
    int oddCount = 0; // Keep track of how many characters have odd frequencies
    for (int i = 0; i < 26; i++)
    {
        if (freq[i] % 2 != 0)
        {
            oddCount++;             // Count odd frequencies
            middle = char(i + 'a'); // The middle character (if needed)
        }
        // Add half of the characters to the "half" string
        half += string(freq[i] / 2, char(i + 'a'));
    }

    // If there are more than one character with an odd frequency, it's impossible to form a palindrome
    if (oddCount > 1)
    {
        cout << -1 << endl;
        return 0;
    }

    // Sort the half part to ensure lexicographical order
    sort(half.begin(), half.end());

    // Form the result palindrome
    string result = half + middle + string(half.rbegin(), half.rend());

    // Output the lexicographically smallest palindrome
    cout << result << endl;

    return 0;
}
