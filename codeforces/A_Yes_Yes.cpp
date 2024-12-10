#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    string repeatedYes = "YesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYes";

    while (t--)
    {
        string in;
        cin >> in;
        bool found = false;

        for (int i = 0; i <= repeatedYes.size() - in.size(); i++)
        {
            if (repeatedYes.substr(i, in.size()) == in)
            {
                found = true;
                break;
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
    }

    return 0;
}
