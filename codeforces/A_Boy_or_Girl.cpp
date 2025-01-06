#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{

    string input;
    cin >> input;
    unordered_map<char, int> track;

    for (char c : input)
    {
        track[c]++;
        if (track[c] > 1)
        {
            track[c]--;
        }
    }
    if (track.size() % 2 == 0)
        cout << "CHAT WITH HER!";
    else if (track.size() % 2 != 0)
    {
        cout << "IGNORE HIM!";
    }
}
