#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int main()
{
    string in1, in2;
    cin >> in1 >> in2;

    multiset<char> input;

    for (char c : in1)
    {
        input.insert(c);
    }
    for (char c : in2)
    {
        input.insert(c);
    }

    string mainin1;
    cin >> mainin1;

    bool possible = true;
    for (char c : mainin1)
    {
        auto it = input.find(c);
        if (it != input.end())
        {
            input.erase(it); // Only remove one instance of the character
        }
        else
        {
            possible = false; // Character not found
            break;
        }
    }

    if (possible && input.empty())
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}
