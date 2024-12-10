#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string input;
        cin >> input;
        int size = input.size();

        unordered_map<char, int> freq;
        for (char c : input)
        {
            freq[c]++;
        }

        int red = 0, green = 0;
        for (auto &p : freq)
        {
            if (p.second >= 2)
            {
                red++;
                green++;
            }
            else
            {
                if (red < green)
                {
                    red++;
                }
                else
                {
                    green++;
                }
            }
        }

        int minimum = min(red, green);
        cout << minimum << endl;
    }

    return 0;
}
