#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    string input;
    cin >> input;
    string sub1 = "AB";
    string sub2 = "BA";

    size_t p1 = input.find(sub1);
    size_t p2 = input.find(sub2);

    bool found = false;

    // Check for non-overlapping "AB" and "BA"
    if (p1 != string::npos)
    {
        p2 = input.find(sub2, p1 + 2);
        if (p2 != string::npos)
        {
            found = true;
        }
    }

    // Check for non-overlapping "BA" and "AB"
    if (!found)
    {
        p2 = input.find(sub2);
        if (p2 != string::npos)
        {
            p1 = input.find(sub1, p2 + 2);
            if (p1 != string::npos)
            {
                found = true;
            }
        }
    }

    if (found)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}
