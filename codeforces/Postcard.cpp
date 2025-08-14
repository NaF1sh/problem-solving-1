#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    int k;
    cin >> s >> k;

    vector<pair<char, char>> parsed; // {letter, modifier}, modifier = 0 (none), ? or *
    for (int i = 0; i < s.size(); ++i)
    {
        if (s[i] == '?' || s[i] == '*')
        {
            parsed.back().second = s[i]; // mark the last letter
        }
        else
        {
            parsed.push_back({s[i], 0});
        }
    }

    int min_len = 0;
    for (auto [ch, mod] : parsed)
    {
        if (mod == 0)
            min_len++; // mandatory letters
    }

    if (k < min_len)
    {
        cout << "Impossible\n";
        return 0;
    }

    int extra = k - min_len;
    bool has_star = false;
    for (auto [ch, mod] : parsed)
        if (mod == '*')
            has_star = true;

    if (extra > 0 && !has_star)
    {
        cout << "Impossible\n";
        return 0;
    }

    string res;
    for (auto [ch, mod] : parsed)
    {
        if (mod == 0)
        {
            res += ch; // must keep
        }
        else if (mod == '?')
        {
            if (extra > 0)
            {
                res += ch;
                extra--;
            }
            // else skip the char
        }
        else if (mod == '*')
        {
            if (extra > 0)
            {
                res += string(1 + extra, ch); // repeat as much as needed
                extra = 0;
            }
            else
            {
                // don't use this letter
            }
        }
    }

    cout << res << "\n";
    return 0;
}
