#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;

    cin >> s;

    string pattern = "WUB";
    size_t pos;

    // Replace all occurrences of "WUB" with a space
    while ((pos = s.find(pattern)) != string::npos)
    {
        s.replace(pos, pattern.length(), " ");
    }

    // Remove leading and trailing spaces
    size_t start = s.find_first_not_of(" ");
    size_t end = s.find_last_not_of(" ");
    if (start == string::npos)
    {
        s = "";
    }
    else
    {
        s = s.substr(start, end - start + 1);
    }

    // Remove multiple spaces
    string result;
    bool in_space = false;
    for (char c : s)
    {
        if (c != ' ')
        {
            result += c;
            in_space = false;
        }
        else if (!in_space)
        {
            result += ' ';
            in_space = true;
        }
    }

    cout << result << endl;

    return 0;
}
