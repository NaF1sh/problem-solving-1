#include <iostream>
#include <string>

using namespace std;

// Function to check if a string is interesting
bool isInteresting(string s)
{
    int n = s.size();

    // Check all substrings
    for (int len = 1; len <= n; len++)
    { // Length of substring
        for (int start = 0; start + len <= n; start++)
        {                                      // Start position
            string sub = s.substr(start, len); // Get substring

            // Count occurrences of 'sub' in 's'
            int count = 0;
            for (int i = 0; i + len <= n; i++)
            {
                if (s.substr(i, len) == sub)
                {
                    count++;
                }
            }

            // Check condition: |sub| % count == 0
            if (len % count != 0)
            {
                return false; // Found an invalid case, return "NO"
            }
        }
    }

    return true; // If all substrings satisfy condition, return "YES"
}

int main()
{
    int t;
    cin >> t; // Number of test cases

    while (t--)
    {
        string s;
        cin >> s;

        if (isInteresting(s))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
