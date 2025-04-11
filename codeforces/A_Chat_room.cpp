#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    bool flag1 = false;
    bool flag2 = false;
    bool flag3 = false;
    bool flag4 = false;
    bool flag5 = false;

    for (char c : s)
    {
        if (c == 'h' && !flag1)
        {
            flag1 = true;
        }
        else if (c == 'e' && flag1 && !flag2)
        {
            flag2 = true;
        }
        else if (c == 'l' && flag1 && flag2 && !flag3)
        {
            flag3 = true;
        }
        else if (c == 'l' && flag1 && flag2 && flag3 && !flag4)
        {
            flag4 = true;
        }
        else if (c == 'o' && flag1 && flag2 && flag3 && flag4 && !flag5)
        {
            flag5 = true;
            break;
        }
    }

    if (flag1 && flag2 && flag3 && flag4 && flag5)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}
