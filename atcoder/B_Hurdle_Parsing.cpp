#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '|')
        {
            int count = 0;
            for (int j = i + 1; j < s.size(); j++)
            {
                if (s[j] == '-')
                {
                    count++;
                }
                else if (s[j] == '|')
                {
                    cout << count << " ";
                    i = j - 1;
                    break;
                }
            }
        }
    }
    return 0;
}
