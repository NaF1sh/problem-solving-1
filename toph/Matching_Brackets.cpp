#include <bits/stdc++.h>
using namespace std;

int main()
{
    string word;
    getline(cin, word);

    stack<char> s;
    bool flag = false;

    for (char c : word)
    {
        if (c == '(' || c == '{' || c == '[')
        {
            s.push(c);
        }
        else if (c == ')' && !s.empty() && s.top() == '(')
        {
            s.pop();
        }
        else if (c == '}' && !s.empty() && s.top() == '{')
        {
            s.pop();
        }
        else if (c == ']' && !s.empty() && s.top() == '[')
        {
            s.pop();
        }
        else if (c == ')' || c == '}' || c == ']')
        {
            cout << "No";
            flag = true;
            break;
        }
    }

    if (!flag)
    {
        if (s.empty())
        {
            cout << "Yes";
        }
        else
        {
            cout << "No";
        }
    }

    return 0;
}
