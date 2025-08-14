#include <bits/stdc++.h>
using namespace std;

bool hasLower(string &s)
{
    for (char c : s)
        if (islower(c))
            return true;
    return false;
}

bool hasUpper(string &s)
{
    for (char c : s)
        if (isupper(c))
            return true;
    return false;
}

bool hasDigit(string &s)
{
    for (char c : s)
        if (isdigit(c))
            return true;
    return false;
}

void solve(string &s)
{
    bool lower = hasLower(s);
    bool upper = hasUpper(s);
    bool digit = hasDigit(s);

    if (lower && upper && digit)
    {
        cout << s << '\n';
        return;
    }

    // Count how many types are missing
    vector<bool> missing(3, false); // 0 = lower, 1 = upper, 2 = digit
    if (!lower)
        missing[0] = true;
    if (!upper)
        missing[1] = true;
    if (!digit)
        missing[2] = true;

    int missingCount = missing[0] + missing[1] + missing[2];

    // Try replacing characters to fix the issue
    for (int i = 0; i < s.size(); ++i)
    {
        char original = s[i];

        for (int j = 0; j < 3; ++j)
        {
            if (!missing[j])
                continue;

            char replacement;
            if (j == 0)
                replacement = 'a'; // lowercase
            else if (j == 1)
                replacement = 'A'; // uppercase
            else
                replacement = '0'; // digit

            s[i] = replacement;

            if (hasLower(s) && hasUpper(s) && hasDigit(s))
            {
                cout << s << '\n';
                return;
            }

            s[i] = original; // restore if not successful
        }
    }

    // If we couldn't fix by replacing one char, fix two
    // This only happens when 2 types are missing
    int fixed = 0;
    for (int i = 0; i < s.size(); ++i)
    {
        char original = s[i];

        if (!hasLower(s) && fixed < 1)
        {
            s[i] = 'a';
            fixed++;
        }
        else if (!hasUpper(s) && fixed < 2)
        {
            s[i] = 'A';
            fixed++;
        }
        else if (!hasDigit(s) && fixed < 2)
        {
            s[i] = '0';
            fixed++;
        }

        if (hasLower(s) && hasUpper(s) && hasDigit(s))
            break;
    }

    cout << s << '\n';
}

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        string s;
        cin >> s;
        solve(s);
    }
    return 0;
}
